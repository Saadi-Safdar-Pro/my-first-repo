const audio = document.getElementById("audio");
const playBtn = document.getElementById("play");
const nextBtn = document.getElementById("next");
const prevBtn = document.getElementById("prev");
const title = document.getElementById("title");
const progress = document.getElementById("progress");
const progressBar = document.getElementById("progress-bar");
const durationEl = document.getElementById("duration");
const currentTimeEl = document.getElementById("current-time");
const volumeSlider = document.getElementById("volume");

const songs = ["song1", "song2", "song3"];
let songIndex = 0;

function loadSong(song) {
  title.textContent = song;
  audio.src = `songs/${song}.mp3`;
}

function playSong() {
  audio.play();
  playBtn.innerHTML = "⏸";
}

function pauseSong() {
  audio.pause();
  playBtn.innerHTML = "▶️";
}

playBtn.addEventListener("click", () => {
  if (audio.paused) {
    playSong();
  } else {
    pauseSong();
  }
});

nextBtn.addEventListener("click", () => {
  songIndex = (songIndex + 1) % songs.length;
  loadSong(songs[songIndex]);
  playSong();
});

prevBtn.addEventListener("click", () => {
  songIndex = (songIndex - 1 + songs.length) % songs.length;
  loadSong(songs[songIndex]);
  playSong();
});

audio.addEventListener("timeupdate", updateProgress);

function updateProgress() {
  const { duration, currentTime } = audio;
  const progressPercent = (currentTime / duration) * 100;
  progress.style.width = `${progressPercent}%`;

  currentTimeEl.textContent = formatTime(currentTime);
  durationEl.textContent = formatTime(duration);
}

progressBar.addEventListener("click", (e) => {
  const width = progressBar.clientWidth;
  const clickX = e.offsetX;
  const duration = audio.duration;

  audio.currentTime = (clickX / width) * duration;
});

volumeSlider.addEventListener("input", () => {
  audio.volume = volumeSlider.value;
});

function formatTime(time) {
  const mins = Math.floor(time / 60);
  const secs = Math.floor(time % 60).toString().padStart(2, "0");
  return `${mins}:${secs}`;
}

loadSong(songs[songIndex]);
