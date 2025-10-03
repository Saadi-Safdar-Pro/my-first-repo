

  document.getElementById("btn").addEventListener("click", function() {
    document.getElementById("output").innerText = "You clicked the button!";
  });


  document.getElementById("username").addEventListener("input", function(event) {
    document.getElementById("liveText").innerText = "You typed: " + event.target.value;
  });


  const p = document.getElementById("hoverMe");
  p.addEventListener("mouseover", () => {
    p.style.color = "blue";
  });
  p.addEventListener("mouseout", () => {
    p.style.color = "black";
  });


  const textarea = document.getElementById("text");
  const count = document.getElementById("count");

  textarea.addEventListener("input", () => {
    count.innerText = textarea.value.length;
  });

function sayHello() {
  alert("Hello from external JS!");
}


  function greetUser() {
    const name = document.getElementById("nameInput").value;
    document.getElementById("greeting").innerText = "Hello, " + name + "!";
  }