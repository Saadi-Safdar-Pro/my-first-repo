function generateQR() {
  const input = document.getElementById("qr-input").value.trim();
  const qrImage = document.getElementById("qr-image");

  if (!input) {
    alert("Please enter some text or URL.");
    return;
  }

  const apiURL = `https://api.qrserver.com/v1/create-qr-code/?data=${encodeURIComponent(input)}&size=200x200`;

  qrImage.src = apiURL;
}
