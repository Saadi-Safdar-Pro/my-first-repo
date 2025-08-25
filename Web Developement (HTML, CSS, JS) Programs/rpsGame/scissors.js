let userScore = 0;
let compScore = 0;

function play(userChoice) {
  const choices = ["rock", "paper", "scissors"];
  const compChoice = choices[Math.floor(Math.random() * 3)];

  let result = "";

  if (userChoice === compChoice) {
    result = "It's a draw!";
  } else if (
    (userChoice === "rock" && compChoice === "scissors") ||
    (userChoice === "paper" && compChoice === "rock") ||
    (userChoice === "scissors" && compChoice === "paper")
  ) {
    result = "You win!";
    userScore++;
  } else {
    result = "Computer wins!";
    compScore++;
  }

  document.getElementById("resultText").textContent = `You chose ${userChoice}, computer chose ${compChoice}. ${result}`;
  document.getElementById("userScore").textContent = userScore;
  document.getElementById("compScore").textContent = compScore;
}
