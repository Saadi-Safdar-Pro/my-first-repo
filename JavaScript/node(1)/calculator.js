// calculator.js
const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
});

readline.question('Enter first number: ', (a) => {
  readline.question('Enter second number: ', (b) => {
    let sum = parseFloat(a) + parseFloat(b);
    console.log(`Sum: ${sum}`);
    readline.close();
  });
});
