// // routes/userRoutes.js
// const express = require("express");
// const router = express.Router();

// router.get("/user", (req, res) => {
//   res.json({
//     id: 1,
//     name: "Saadi",
//     email: "saadi@example.com"
//   });
// });

// router.get("/user/about", (req, res) => {
//   res.send("This is the about section of the user.");
// });

// module.exports = router;




// const express = require('express');
// const router = express.Router();

// // /api/user
// router.get('/', (req, res) => {
//   res.json({ name: 'Saadi', age: 20 });
// });

// // /api/user/about
// router.get('/about', (req, res) => {
//   res.send('This is the about section.');
// });

// // /api/user/:id
// router.get('/:id', (req, res) => {
//   const userId = req.params.id;
//   res.json({ message: `User ID is ${userId}` });
// });

// module.exports = router;






const express = require('express');
const router = express.Router();
const User = require('../models/User');

// GET all users
router.get('/', async (req, res) => {
  const users = await User.find();
  res.json(users);
});

// POST new user
router.post('/', async (req, res) => {
  const { username, email } = req.body;
  const newUser = new User({ username, email });
  await newUser.save();
  res.json({ message: 'User added successfully!' });
});

module.exports = router;
