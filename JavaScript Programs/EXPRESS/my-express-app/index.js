// // const express = require("express");
// // const app = express();
// // const PORT = 3000;

// // app.get("/", (req, res) => {
// //   res.send("🌍 Hello, Universe!");
// // });

// // app.get("/about", (req, res) => {
// //   res.send("This is the About Page.");
// // });

// // app.get("/contact", (req, res) => {
// //   res.send("Contact us at: contact@example.com");
// // });

// // app.get("/html", (req, res) => {
// //   res.send(`
// //     <h1>Welcome!</h1>
// //     <p>This is HTML content from Express.</p>
// //   `);
// // });

// // app.get("/json", (req, res) => {
// //   res.json({
// //     name: "Saadi",
// //     learning: "Express.js",
// //     time: new Date().toLocaleTimeString()
// //   });
// // });

// // app.use((req, res, next) => {
// //   console.log(`[${new Date().toISOString()}] ${req.method} ${req.url}`);
// //   next(); // move to the next function
// // });

// // app.use(express.static("public"));

// // app.listen(PORT, () => {
// //   console.log(`Server running at http://localhost:${PORT}`);
// // });

// const express = require("express");
// const app = express();
// const PORT = 3000;

// const chalk = require("chalk");

// app.use((req, res, next) => {
//   const time = new Date().toLocaleTimeString();
//   console.log(chalk.green(`[${time}] ${req.method}`), chalk.blue(req.url));
//   next();
// });

// // ✅ Logger Middleware
// app.use((req, res, next) => {
//   const time = new Date().toISOString();
//   console.log(`[${time}] ${req.method} ${req.url}`);
//   next();
// });

// // ✅ Routes
// app.get("/", (req, res) => {
//   res.send("Home Page");
// });

// app.get("/html", (req, res) => {
//   res.send("<h1>Hello from HTML route</h1>");
// });

// app.get("/json", (req, res) => {
//   res.json({ name: "Saadi", skill: "Express.js" });
// });

// app.listen(PORT, () => {
//   console.log(`Server running at http://localhost:${PORT}`);
// });





// const express = require("express");
// const app = express();
// const PORT = 3000;

// // Middleware to serve static files from public folder
// app.use(express.static("public"));

// // JSON route
// app.get("/api/info", (req, res) => {
//   res.json({
//     name: "Saadi",
//     role: "Express.js Learner",
//     message: "This is served as JSON!"
//   });
// });

// // Start the server
// app.listen(PORT, () => {
//   console.log(`Server running at http://localhost:${PORT}`);
// });







// const express = require("express");
// const app = express();
// const logger = require("./logger");
// const userRoutes = require("./routes/userRoutes");

// const PORT = 3000;

// // Middleware
// app.use(logger); // custom logging
// app.use(express.static("public")); // serve public files
// app.use("/api", userRoutes); // mount user routes at /api

// app.listen(PORT, () => {
//   console.log(`Server running at http://localhost:${PORT}`);
// });



// const express = require('express');
// const path = require('path');
// const app = express();
// const PORT = 3000;

// // Middleware to serve static files
// app.use(express.static(path.join(__dirname, 'public')));

// // Middleware to parse JSON from POST requests
// app.use(express.json());

// // Routes
// app.get('/api/user', (req, res) => {
//   res.json({ name: "John Doe", email: "john@example.com" });
// });

// app.get('/api/user/about', (req, res) => {
//   res.send("This is about the user.");
// });

// // Handle form POST request
// app.post('/api/contact', (req, res) => {
//   const { name, email } = req.body;
//   console.log(`New contact submission: ${name} <${email}>`);
//   res.json({ message: `Thanks for contacting us, ${name}!` });
// });

// // Start server
// app.listen(PORT, () => {
//   console.log(`Server running at http://localhost:${PORT}`);
// });





// const express = require("express");
// const morgan = require("morgan");
// const path = require("path");

// const app = express();
// const PORT = 3000;

// // ===== Middleware Section ===== //

// // Built-in middleware
// app.use(express.json());
// app.use(express.urlencoded({ extended: true }));

// // Third-party middleware
// app.use(morgan("dev"));

// // Static files middleware
// app.use(express.static(path.join(__dirname, "public")));

// // Custom middleware: Request logger
// app.use((req, res, next) => {
//   console.log(`[Logger] ${req.method} ${req.url}`);
//   next();
// });

// // Custom middleware: Time-based access control
// const checkWorkingHours = (req, res, next) => {
//   const hour = new Date().getHours();
//   if (hour < 9 || hour > 17) {
//     return res.send("⛔ Sorry, we are closed. Come back between 9 AM to 5 PM.");
//   }
//   next();
// };

// // ===== Routes Section ===== //

// // Homepage (HTML file served via express.static)
// app.get("/", (req, res) => {
//   res.sendFile(path.join(__dirname, "public", "index.html"));
// });

// // Protected route using custom middleware
// app.get("/service", checkWorkingHours, (req, res) => {
//   res.send("✅ Welcome to our services! You accessed during business hours.");
// });

// // Fallback route
// app.use((req, res) => {
//   res.status(404).send("404 Not Found");
// });

// // ===== Server Start ===== //
// app.listen(PORT, () => {
//   console.log(`🚀 Server running at http://localhost:${PORT}`);
// });



// const express = require('express');
// const path = require('path');
// const app = express();

// // Middleware to parse form data
// app.use(express.urlencoded({ extended: true }));
// app.use(express.json());

// // Serve static files
// app.use(express.static(path.join(__dirname, 'public')));

// // Route: Home
// app.get('/', (req, res) => {
//   res.sendFile(path.join(__dirname, 'public', 'index.html'));
// });

// // Route: Simple JSON
// app.get('/api/user', (req, res) => {
//   res.json({ name: 'Saadi', age: 20 });
// });

// // Route: About
// app.get('/api/user/about', (req, res) => {
//   res.send('This is the about section.');
// });

// // Route: Handle form POST
// app.post('/submit', (req, res) => {
//   const { username, email } = req.body;
//   res.send(`Thank you, ${username}! We received your email: ${email}`);
// });

// // 🔥 Route: Dynamic parameter
// app.get('/api/user/:id', (req, res) => {
//   const userId = req.params.id;
//   res.json({ message: `User ID is ${userId}` });
// });

// // Start server
// const PORT = 3000;
// app.listen(PORT, () => {
//   console.log(`Server running at http://localhost:${PORT}`);
// });






// const express = require('express');
// const path = require('path');
// const app = express();

// // Import modular routes
// const userRoutes = require('./routes/userRoutes');

// // Middleware
// app.use(express.urlencoded({ extended: true }));
// app.use(express.json());
// app.use(express.static(path.join(__dirname, 'public')));

// // Home route
// app.get('/', (req, res) => {
//   res.sendFile(path.join(__dirname, 'public', 'index.html'));
// });

// // Modular route
// app.use('/api/user', userRoutes);

// // Form POST handler
// app.post('/submit', (req, res) => {
//   const { username, email } = req.body;
//   res.send(`Thank you, ${username}! We received your email: ${email}`);
// });

// // Start server
// const PORT = 3000;
// app.listen(PORT, () => {
//   console.log(`Server running at http://localhost:${PORT}`);
// });



// const express = require('express');
// const path = require('path');
// const app = express();

// // Import modular routes
// const userRoutes = require('./routes/userRoutes');

// // Middleware
// app.use(express.urlencoded({ extended: true }));
// app.use(express.json());
// app.use(express.static(path.join(__dirname, 'public')));

// // Routes
// app.get('/', (req, res) => {
//   res.sendFile(path.join(__dirname, 'public', 'index.html'));
// });

// app.use('/api/user', userRoutes);

// app.post('/submit', (req, res) => {
//   const { username, email } = req.body;
//   res.send(`Thank you, ${username}! We received your email: ${email}`);
// });

// // Handle 404 - Not Found
// app.use((req, res, next) => {
//   res.status(404).sendFile(path.join(__dirname, 'public', '404.html'));
// });

// // Global Error Handler
// app.use((err, req, res, next) => {
//   console.error(err.stack);
//   res.status(500).send('Something broke on the server!');
// });


// // Start server
// const PORT = 3000;
// app.listen(PORT, () => {
//   console.log(`Server running at http://localhost:${PORT}`);
// });









const express = require('express');
const path = require('path');
const connectDB = require('./db/connection');
const userRoutes = require('./routes/userRoutes');

const app = express();
connectDB();

app.use(express.urlencoded({ extended: true }));
app.use(express.json());
app.use(express.static(path.join(__dirname, 'public')));

app.get('/', (req, res) => {
  res.sendFile(path.join(__dirname, 'public', 'index.html'));
});

app.use('/api/user', userRoutes);

app.post('/submit', (req, res) => {
  const { username, email } = req.body;
  res.send(`Thank you, ${username}! We received your email: ${email}`);
});

app.use((req, res, next) => {
  res.status(404).sendFile(path.join(__dirname, 'public', '404.html'));
});

app.use((err, req, res, next) => {
  console.error(err.stack);
  res.status(500).send('Something broke on the server!');
});

const PORT = 3000;
app.listen(PORT, () => {
  console.log(`Server running at http://localhost:${PORT}`);
});
