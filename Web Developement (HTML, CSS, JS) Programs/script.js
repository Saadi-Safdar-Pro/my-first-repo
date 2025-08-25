function sayHello() {
  alert("Hello from external JS!");
}

function changeText() {
    document.getElementById("demo").innerText = "Text Changed!";
  }

  function greetUser() {
    const name = document.getElementById("nameInput").value;
    document.getElementById("greeting").innerText = "Hello, " + name + "!";
  }