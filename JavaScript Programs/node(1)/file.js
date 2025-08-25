// const fs = require("fs");

// fs.writeFile("output.txt", "Hello from Node.js!", (err) => {
//   if (err) throw err;
//   console.log("File created and written successfully!");
// });


// const fs = require("fs");

// fs.writeFile("output.txt", "Hello from Node.js!", (err) => {
//   if (err) throw err;
//   console.log("File created and written successfully!");
// });


// const fs = require("fs");

// fs.appendFile("output.txt", "\nThis is an extra line.", (err) => {
//   if (err) throw err;
//   console.log("Data appended to file!");
// });


// const fs = require("fs");

// fs.unlink("output.txt", (err) => {
//   if (err) throw err;
//   console.log("File deleted!");
// });


// const fs = require('fs');
// const readline = require('readline');

// // Set up input from user
// const rl = readline.createInterface({
//   input: process.stdin,
//   output: process.stdout
// });

// rl.question("Enter note title: ", function(title) {
//   rl.question("Enter note content: ", function(content) {
//     const fileName = title + ".txt";

//     fs.writeFile(fileName, content, (err) => {
//       if (err) {
//         console.log("❌ Error saving note:", err);
//       } else {
//         console.log(`✅ Note saved as '${fileName}'`);
//       }
//       rl.close();
//     });
//   });
// });


const readline = require('readline');

// Quiz questions
const questions = [
  {
    question: "1. What is the capital of Pakistan?",
    options: ["a) Lahore", "b) Islamabad", "c) Karachi", "d) Multan"],
    answer: "b"
  },
  {
    question: "2. What does HTML stand for?",
    options: ["a) HighText Machine Language", "b) HyperText Markdown Language", "c) HyperText Markup Language", "d) None"],
    answer: "c"
  },
  {
    question: "3. Which is a JavaScript framework?",
    options: ["a) Django", "b) React", "c) Laravel", "d) Flask"],
    answer: "b"
  }
];

let score = 0;
let index = 0;

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

function askQuestion() {
  const q = questions[index];
  console.log(`\n${q.question}`);
  q.options.forEach(opt => console.log(opt));

  rl.question("Your answer (a/b/c/d): ", (userAns) => {
    if (userAns.toLowerCase() === q.answer) {
      console.log("✅ Correct!");
      score++;
    } else {
      console.log(`❌ Wrong! Correct answer: ${q.answer}`);
    }

    index++;
    if (index < questions.length) {
      askQuestion();
    } else {
      console.log(`\n🎉 Quiz Finished! Your Score: ${score}/${questions.length}`);
      rl.close();
    }
  });
}

// Start quiz
askQuestion();
