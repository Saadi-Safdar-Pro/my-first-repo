// logger.js
function logger(req, res, next) {
  console.log(`[${new Date().toLocaleString()}] ${req.method} ${req.url}`);
  next(); // move to next middleware or route
}

module.exports = logger;
