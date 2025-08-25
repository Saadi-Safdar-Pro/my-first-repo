const fromCurrency = document.getElementById("fromCurrency");
const toCurrency = document.getElementById("toCurrency");
const amount = document.getElementById("amount");
const resultText = document.getElementById("resultText");

let rates = {}; // store fetched rates

// Fetch currency rates once when page loads
fetch("https://api.exchangerate-api.com/v4/latest/USD")
  .then(res => res.json())
  .then(data => {
    rates = data.rates;
    populateCurrencyDropdowns(rates);
  })
  .catch(err => {
    resultText.textContent = "Failed to load exchange rates.";
    console.error(err);
  });

function populateCurrencyDropdowns(rateData) {
  const currencyCodes = Object.keys(rateData);
  currencyCodes.forEach(code => {
    fromCurrency.innerHTML += `<option value="${code}">${code}</option>`;
    toCurrency.innerHTML += `<option value="${code}">${code}</option>`;
  });

  // Default selections
  fromCurrency.value = "USD";
  toCurrency.value = "PKR";
}

function convertCurrency() {
  const amt = parseFloat(amount.value);
  if (isNaN(amt)) {
    resultText.textContent = "Please enter a valid amount.";
    return;
  }

  const from = fromCurrency.value;
  const to = toCurrency.value;

  const converted = amt * (rates[to] / rates[from]);
  resultText.textContent = `${amt} ${from} = ${converted.toFixed(2)} ${to}`;
}
