const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

const randomNumber = Math.floor(Math.random() * 10) + 1;

rl.question('Guess a number between 1 and 10: ', (answer) => {
  const guess = parseInt(answer);

  if (isNaN(guess)) {
    console.log('❌ Please enter a valid number.');
  } else if (guess === randomNumber) {
    console.log('🎉 Correct! You guessed it right.');
  } else {
    console.log(`😢 Wrong! The correct number was ${randomNumber}.`);
  }

  rl.close();
});
