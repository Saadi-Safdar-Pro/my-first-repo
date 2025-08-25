const form = document.getElementById('expense-form');
const descriptionInput = document.getElementById('description');
const amountInput = document.getElementById('amount');
const expenseList = document.getElementById('expense-list');
const totalDisplay = document.getElementById('total');

let total = 0;
const chartLabels = [];
const chartData = [];

const ctx = document.getElementById('expense-chart').getContext('2d');
const expenseChart = new Chart(ctx, {
  type: 'pie',
  data: {
    labels: chartLabels,
    datasets: [{
      label: 'Expense Breakdown',
      data: chartData,
      backgroundColor: [
        '#4FD1C5', '#FC8181', '#68D391', '#F6AD55',
        '#9F7AEA', '#F56565', '#ECC94B', '#4299E1'
      ],
    }]
  },
  options: {
    responsive: true,
    plugins: {
      legend: {
        position: 'bottom'
      }
    }
  }
});

form.addEventListener('submit', function (e) {
  e.preventDefault();

  const description = descriptionInput.value.trim();
  const amount = parseFloat(amountInput.value);

  if (!description || isNaN(amount)) return;

  // Add expense to the list
  const li = document.createElement('li');
  li.innerHTML = `<span>${description}</span><span>$${amount.toFixed(2)}</span>`;
  expenseList.appendChild(li);

  // Update total
  total += amount;
  totalDisplay.textContent = total.toFixed(2);

  // Update chart
  const index = chartLabels.indexOf(description);
  if (index === -1) {
    chartLabels.push(description);
    chartData.push(amount);
  } else {
    chartData[index] += amount;
  }

  expenseChart.update();

  // Clear inputs
  descriptionInput.value = '';
  amountInput.value = '';
});
