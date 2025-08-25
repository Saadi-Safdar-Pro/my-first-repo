// Load tasks from localStorage on start
window.onload = function() {
  loadTasks();
};

function addTask() {
  const input = document.getElementById("taskInput");
  const taskText = input.value.trim();
  if (taskText === "") return;

  const taskList = document.getElementById("taskList");

  const li = document.createElement("li");
  li.innerHTML = `
    ${taskText}
    <button class="delete-btn" onclick="deleteTask(this)">Delete</button>
  `;

  taskList.appendChild(li);
  input.value = "";

  saveTasks();
}

function deleteTask(button) {
  button.parentElement.remove();
  saveTasks();
}

function saveTasks() {
  const tasks = [];
  document.querySelectorAll("#taskList li").forEach(li => {
    tasks.push(li.childNodes[0].textContent.trim());
  });
  localStorage.setItem("todoTasks", JSON.stringify(tasks));
}

function loadTasks() {
  const tasks = JSON.parse(localStorage.getItem("todoTasks")) || [];
  const taskList = document.getElementById("taskList");
  tasks.forEach(taskText => {
    const li = document.createElement("li");
    li.innerHTML = `
      ${taskText}
      <button class="delete-btn" onclick="deleteTask(this)">Delete</button>
    `;
    taskList.appendChild(li);
  });
}
