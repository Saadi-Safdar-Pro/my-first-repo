function convertSize() {
  const value = parseFloat(document.getElementById("inputValue").value);
  const unit = document.getElementById("inputUnit").value;
  const results = document.getElementById("results");

  if (isNaN(value)) {
    results.innerHTML = "Please enter a valid number.";
    return;
  }

  const units = ["B", "KB", "MB", "GB", "TB"];
  const base = 1024;
  let bytes;

  // Convert to bytes first
  switch (unit) {
    case "B": bytes = value; break;
    case "KB": bytes = value * base; break;
    case "MB": bytes = value * base ** 2; break;
    case "GB": bytes = value * base ** 3; break;
    case "TB": bytes = value * base ** 4; break;
  }

  // Display conversions
  let output = "";
  units.forEach((u, i) => {
    const converted = bytes / base ** i;
    output += `<p><strong>${u}:</strong> ${converted.toFixed(4)}</p>`;
  });

  results.innerHTML = output;
}
