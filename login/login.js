const form = document.getElementById("loginForm");
const errorMsg = document.getElementById("errorMsg");
const successMsg = document.getElementById("successMsg");

form.addEventListener("submit", function (e) {
  e.preventDefault(); // prevent form from refreshing the page

  const username = document.getElementById("username").value.trim();
  const password = document.getElementById("password").value.trim();

  // Reset messages
  errorMsg.textContent = "";
  successMsg.textContent = "";

  if (username === "" || password === "") {
    errorMsg.textContent = "Please fill in all fields.";
  } else if (password.length < 6) {
    errorMsg.textContent = "Password must be at least 6 characters.";
  } else {
    successMsg.textContent = `Welcome, ${username}! ✅`;
    form.reset();
  }
});
