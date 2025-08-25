const express = require('express');
const app = express();
const port = 3000;

app.get('/', (req, res) => {
  res.send('Welcome to my first Express server!');
});

app.get('/about', (req, res) => {
  res.send('This is the about page.');
});

app.listen(port, () => {
  console.log(`Server running at http://localhost:${port}`);
});
