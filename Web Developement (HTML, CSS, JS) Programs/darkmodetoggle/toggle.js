// Apply saved mode on page load
window.onload = function () {
  if (localStorage.getItem("mode") === "dark") {
    document.body.classList.add("dark-mode");
  }
};

// Toggle mode and save preference
function toggleMode() {
  document.body.classList.toggle("dark-mode");

  if (document.body.classList.contains("dark-mode")) {
    localStorage.setItem("mode", "dark");
  } else {
    localStorage.setItem("mode", "light");
  }
}
