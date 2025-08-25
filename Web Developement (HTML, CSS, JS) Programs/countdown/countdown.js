// Set your target date
const target = new Date("2025-07-14T19:41:59").getTime();

const daysEl = document.getElementById("days");
const hoursEl = document.getElementById("hours");
const minutesEl = document.getElementById("minutes");
const secondsEl = document.getElementById("seconds");
const doneMsg = document.getElementById("doneMessage");

function updateCountdown() {
  const now = new Date().getTime();
  const gap = target - now;

  if (gap <= 0) {
    clearInterval(timer);
    daysEl.innerText = 0;
    hoursEl.innerText = 0;
    minutesEl.innerText = 0;
    secondsEl.innerText = 0;
    doneMsg.innerText = "🎉 Countdown Complete!";
    return;
  }

  const days = Math.floor(gap / (1000 * 60 * 60 * 24));
  const hours = Math.floor((gap % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60));
  const minutes = Math.floor((gap % (1000 * 60 * 60)) / (1000 * 60));
  const seconds = Math.floor((gap % (1000 * 60)) / 1000);

  daysEl.innerText = days;
  hoursEl.innerText = hours;
  minutesEl.innerText = minutes;
  secondsEl.innerText = seconds;
}

// Start countdown
const timer = setInterval(updateCountdown, 1000);
updateCountdown();
