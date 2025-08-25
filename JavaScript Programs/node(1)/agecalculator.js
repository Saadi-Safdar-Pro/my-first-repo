const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question("👤 What is your name? ", (name) => {
  rl.question("📆 Enter your birth year (e.g., 2005): ", (birthYear) => {
    const currentYear = new Date().getFullYear();
    const age = currentYear - parseInt(birthYear);

    console.log(`\n👋 Hello, ${name}! You are ${age} years old in ${currentYear}.`);
    rl.close();
  });
});
