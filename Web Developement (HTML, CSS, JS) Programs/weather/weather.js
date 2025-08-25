async function getWeather() {
  const city = document.getElementById("cityInput").value;
  const apiKey = "YOUR_API_KEY_HERE"; // ← put your API key here
  const url = `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${apiKey}&units=metric`;

  try {
    const response = await fetch(url);
    if (!response.ok) throw new Error("City not found");

    const data = await response.json();
    const resultDiv = document.getElementById("weatherResult");

    const weather = `
      <h3>${data.name}, ${data.sys.country}</h3>
      <p><strong>Temperature:</strong> ${data.main.temp}°C</p>
      <p><strong>Weather:</strong> ${data.weather[0].description}</p>
      <p><strong>Humidity:</strong> ${data.main.humidity}%</p>
      <p><strong>Wind:</strong> ${data.wind.speed} m/s</p>
    `;

    resultDiv.innerHTML = weather;
  } catch (err) {
    document.getElementById("weatherResult").innerHTML = `<p style="color:red;">${err.message}</p>`;
  }
}
