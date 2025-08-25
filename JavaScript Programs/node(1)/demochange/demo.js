
    // let count = 0;

    // const countDisplay = document.getElementById("count");
    // const increaseBtn = document.getElementById("increase");
    // const resetBtn = document.getElementById("reset");

    // increaseBtn.addEventListener("click", function () {
    //   count++;
    //   countDisplay.innerText = count;
    // });

    // resetBtn.addEventListener("click", function () {
    //   count = 0;
    //   countDisplay.innerText = count;
    // });
  
    function changeText() {
  document.getElementById("demo").innerText = "Text Changed!";
document.getElementById("demo").innerText = "New Text";
document.getElementById("demo").style.color = "red";
}

document.getElementById("btn").addEventListener("click", function() {
  alert("Button was clicked!");
});


  document.getElementById("btns").addEventListener("click", function() {
    document.getElementById("output").innerText = "Hello from JavaScript!";
  });


