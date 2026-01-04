// let name = "Alice";
// const age = 20;
// var city = "Lahore";

// let str = "Hello";
// let num = 123;
// let bool = true;
// let nothing = null;
// let notDefined;
// let arr = [1, 2, 3];
// let obj = { x: 10 };

// let a = 5, b = 2;
// console.log(a + b);
// console.log(a - b);
// console.log(a * b);
// console.log(a / b);
// console.log(a % b);
// console.log(++a);

// if (a > b) {
//   console.log("a is greater");
// } else {
//   console.log("b is greater");
// }

// for (let i = 0; i < 5; i++) {
//   console.log("Loop: " + i);
// }

// function greet1(name) {
//   return "Hello " + name;
// }
// console.log(greet1("Saadi"));

// const greet2 = name => "Hello " + name;
// console.log(greet2("Ali"));

// let fruits = ["apple", "banana", "cherry", "date"];
// fruits.push("orange");
// console.log(fruits.length);
// console.log(fruits[0]);
// fruits[1] = "blueberry";
// console.log(fruits);
// fruits.pop();
// console.log(fruits);

// let person = {
//   name: "Ali",
//   age: 21
// };
// console.log(person.name);
// console.log(person.age);
// person.city = "Karachi";
// delete person.age;
// console.log(person);

// let name = "Saadi";
// let age = 19;
// let major = "Computer Science";
// console.log(`My name is ${name}, I am ${age} years old and my major is ${major}.`);

// // While loop
// let count = 0;
// while (count < 3) {
//   console.log("While count:", count);
//   count++;
// }

// // Do...While loop
// let i = 0;
// do {
//   console.log("Do...while:", i);
//   i++;
// } while (i < 3);

// let age = 18;
// let result = (age >= 18) ? "Adult" : "Minor";
// console.log(result);

// let color = "red";

// switch (color) {
//   case "red":
//     console.log("Color is red");
//     break;
//   case "blue":
//     console.log("Color is blue");
//     break;
//   default:
//     console.log("Unknown color");
// }

// console.log(Math.round(5.5));
// console.log(Math.floor(7.9));
// console.log(Math.ceil(3.1));
// console.log(Math.max(1, 33, 5, 9));
// console.log(Math.min(4, 67, 6 ,0))
// console.log(Math.random());      // Random value between 0 and 1
// console.log(Math.pow(2, 3));
// console.log(Math.sqrt(9));
// console.log(Math.abs(-67));
// console.log(Math.trunc(5.9));

// let rand = Math.floor(Math.random() * 10) + 1;
// console.log(rand);

// let now = new Date();
// console.log(now.toString());       // Full string
// console.log(now.getFullYear());    // Year
// console.log(now.getMonth() + 1);   // Month (0-indexed)
// console.log(now.getDate());        // Day of month

// let i = 1;
// let j = 2;
// let sum ;
// do {
//     sum = i * j;
//     console.log(j + " x " + i + " = " + sum);
//     i++;
// } while (i <= 10);

// const readline = require('readline').createInterface({
//   input: process.stdin,
//   output: process.stdout
// });

// readline.question("Enter your name: ", name => {
//   console.log(`Hello, ${name}!`);
//   readline.close();
// });

// const readline = require('readline').createInterface({
//   input: process.stdin,
//   output: process.stdout
// });

// readline.question("Enter a number: ", (input) => {
//   let num = parseInt(input);

//   for (let i = 1; i <= 10; i++) {
//     console.log(`${num} x ${i} = ${num * i}`);
//   }

//   readline.close();
// });

// let a = 5, b = 10;

// console.log(a == b);   // false
// console.log(a != b);   // true
// console.log(a < b);    // true
// console.log(a > b);    // false
// console.log(a <= 5);   // true
// console.log(b >= 10);  // true

// let x = 7;

// console.log(x > 5 && x < 10);  // true (both true)
// console.log(x > 10 || x < 10); // true (one true)
// console.log(!(x == 7));        // false (negation)

// let fruit = "banana";

// switch (fruit) {
//   case "apple":
//     console.log("You picked Apple");
//     break;
//   case "banana":
//     console.log("You picked Banana");
//     break;
//   default:
//     console.log("Unknown fruit");
// }

// let age = 18;
// let result = (age >= 18) ? "Adult" : "Minor";
// console.log(result); // Adult

// function greet(name) {
//   return "Hello, " + name;
// }

// console.log(greet("Saadi")); // Hello, Saadi

// const greet1 = function(name) {
//   return "Hi, " + name;
// };

// console.log(greet1("Ali")); // Hi, Ali

// const greet2 = name => "Hey, " + name;

// console.log(greet2("Zara")); // Hey, Zara

// const add = (a, b) => {
//   return a + b;
// };

// console.log(add(5, 3)); // 8

// function double(x) {
//   return x * 2; // Returns the result
// }

// console.log(double(4)); // Prints the returned value

// function square(x) {
//   return x * x;
// }

// function cube(x) {
//   return x * square(x);
// }

// console.log(square(5));
// console.log(cube(3)); // 27

// function greet(name = "Guest") {
//   console.log("Hello, " + name);
// }

// greet();           // Hello, Guest
// greet("Saadi");    // Hello, Saadi
// greet("Ali");

// let fruits = ["apple", "banana", "orange"];
// console.log(fruits[0]); // apple
// console.log(fruits[2]); // orange
// fruits[1] = "grape";
// console.log(fruits); // ["apple", "grape", "orange"]
// console.log(fruits.length); // 3
// for (let i = 0; i < fruits.length; i++) {
//   console.log(fruits[i]);
// }
// for (let fruit of fruits) {
//   console.log(fruit);
// }

// let numbers = [10, 20, 30, 40, 50];
// let sum = 0;

// for (let i = 0; i < numbers.length; i++) {
//     sum += numbers[i];
// }

// console.log("Sum of elements:", sum);  // Output: Sum of elements: 150

// let nums = [10, 20, 30, 40, 50];
// let sums = 0;

// for (let num of nums) {
//     sums += num;
// }

// console.log("Sum of elements:", sums);  // Output: 150

// let person = {
//   name: "Saadi",
//   age: 20,
//   city: "Lahore"
// };

// console.log(person.name);   // Output: Saadi
// console.log(person["age"]); // Output: 20
// person.age = 21;                 // Update
// person.country = "Pakistan";     // Add new property
// delete person.city;              // Remove a property

// console.log(person);

// for (let key in person) {
//   console.log(key + ": " + person[key]);
// }

// let x = 10;

// function show() {
//   console.log(x); // Can access x
// }

// show();

// function test() {
//   let y = 5;
//   console.log(y); // Accessible here
// }

// test();
// // console.log(y); ❌ Error: y is not defined

// if (true) {
//   let a = 1;
//   const b = 2;
//   console.log(a, b); // Works
// }

// // console.log(a); ❌ Error
// // console.log(b); ❌ Error
