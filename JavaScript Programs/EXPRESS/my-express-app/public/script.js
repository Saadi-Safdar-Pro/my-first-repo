// console.log("<<<<<<<<<<<<<<<<<<<<<<<<<<<,,,Static JS file loaded!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");

// function fetchInfo() {
//   fetch("/api/info")
//     .then((res) => res.json())
//     .then((data) => {
//       document.getElementById("output").textContent = JSON.stringify(data, null, 2);
//     })
//     .catch((err) => console.error(err));
// }




// document.getElementById('contactForm').addEventListener('submit', async (e) => {
//   e.preventDefault();

//   const formData = {
//     name: e.target.name.value,
//     email: e.target.email.value
//   };

//   const response = await fetch('/api/contact', {
//     method: 'POST',
//     headers: { 'Content-Type': 'application/json' },
//     body: JSON.stringify(formData)
//   });

//   const result = await response.json();
//   alert(result.message);
// });




// function checkService() {
//   fetch("/service")
//     .then((res) => res.text())
//     .then((data) => {
//       document.getElementById("message").innerText = data;
//     })
//     .catch((err) => {
//       document.getElementById("message").innerText = "Error: " + err;
//     });
// }



function getUserData() {
  fetch('/api/user')
    .then(res => res.json())
    .then(data => {
      document.getElementById('user-output').innerText = JSON.stringify(data);
    });
}
