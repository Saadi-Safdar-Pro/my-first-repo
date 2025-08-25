const quizData = [
  {
    question: "What does HTML stand for?",
    options: ["Hyperlinks and Text Markup Language", "Hyper Text Markup Language", "Home Tool Markup Language"],
    correct: 1
  },
  {
    question: "Which language is used for styling web pages?",
    options: ["HTML", "jQuery", "CSS"],
    correct: 2
  },
  {
    question: "Inside which HTML element do we put JavaScript?",
    options: ["<js>", "<script>", "<javascript>"],
    correct: 1
  },
  {
    question: "What does CSS stand for?",
    options: ["Creative Style Sheets", "Cascading Style Sheets", "Computer Style Sheets"],
    correct: 1
  },
  {
    question: "Which HTML attribute is used to define inline styles?",
    options: ["style", "font", "class"],
    correct: 0
  },
  {
    question: "What is the correct HTML element for inserting a line break?",
    options: ["<break>", "<br>", "<lb>"],
    correct: 1
  }
];

let currentQuestion = 0;
let score = 0;

const questionEl = document.getElementById("question");
const optionsEl = document.getElementById("options");
const resultEl = document.getElementById("result");
const restartBtn = document.getElementById("restartBtn");

function loadQuestion() {
  const q = quizData[currentQuestion];
  questionEl.innerText = q.question;
  optionsEl.innerHTML = "";

  q.options.forEach((opt, index) => {
    const btn = document.createElement("div");
    btn.innerText = opt;
    btn.classList.add("option");
    btn.onclick = () => checkAnswer(index);
    optionsEl.appendChild(btn);
  });
}

function checkAnswer(selected) {
  const correct = quizData[currentQuestion].correct;
  const options = document.querySelectorAll(".option");

  options.forEach((opt, index) => {
    opt.style.pointerEvents = "none";
    if (index === correct) {
      opt.style.backgroundColor = "#8bc34a";
    } else if (index === selected) {
      opt.style.backgroundColor = "#f44336";
    }
  });

  if (selected === correct) {
    score++;
  }

  // Move to next question after 1s
  setTimeout(() => {
    currentQuestion++;
    if (currentQuestion < quizData.length) {
      loadQuestion();
      updateProgress();
    } else {
      showResult();
    }
  }, 1000);
}

function showResult() {
  questionEl.style.display = "none";
  optionsEl.style.display = "none";
  resultEl.innerText = `🎉 Quiz Completed! Your score: ${score}/${quizData.length}`;
  restartBtn.style.display = "inline-block";
}

restartBtn.addEventListener("click", () => {
  score = 0;
  currentQuestion = 0;
  questionEl.style.display = "block";
  optionsEl.style.display = "block";
  resultEl.innerText = "";
  restartBtn.style.display = "none";
  loadQuestion();
  updateProgress();
});

function updateProgress() {
  const percent = (currentQuestion / quizData.length) * 100;
  document.getElementById("progressBar").style.width = percent + "%";
}

// Start
loadQuestion();
updateProgress();
