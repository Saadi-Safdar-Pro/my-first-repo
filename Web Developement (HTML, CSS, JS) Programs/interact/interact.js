function greetUser() {
  const name = document.getElementById("nameInput").value;
  document.getElementById("greeting").innerText = "Welcome, " + name + "!";
}