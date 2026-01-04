const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let todoList = [];

function showMenu() {
  console.log('\n=== To-Do List Menu ===');
  console.log('1. Add Task');
  console.log('2. View Tasks');
  console.log('3. Delete Task');
  console.log('4. Exit');

  rl.question('Choose an option (1-4): ', (option) => {
    switch (option.trim()) {
      case '1':
        addTask();
        break;
      case '2':
        viewTasks();
        break;
      case '3':
        deleteTask();
        break;
      case '4':
        rl.close();
        break;
      default:
        console.log('❌ Invalid option.');
        showMenu();
    }
  });
}

function addTask() {
  rl.question('Enter new task: ', (task) => {
    todoList.push(task);
    console.log('✅ Task added!');
    showMenu();
  });
}

function viewTasks() {
  if (todoList.length === 0) {
    console.log('📭 No tasks found.');
  } else {
    console.log('\n📋 Your Tasks:');
    todoList.forEach((task, index) => {
      console.log(`${index + 1}. ${task}`);
    });
  }
  showMenu();
}

function deleteTask() {
  if (todoList.length === 0) {
    console.log('❌ No tasks to delete.');
    return showMenu();
  }

  viewTasks();
  rl.question('Enter task number to delete: ', (num) => {
    const index = parseInt(num) - 1;
    if (!isNaN(index) && todoList[index]) {
      todoList.splice(index, 1);
      console.log('🗑️ Task deleted.');
    } else {
      console.log('❌ Invalid task number.');
    }
    showMenu();
  });
}

// Start the app
showMenu();
