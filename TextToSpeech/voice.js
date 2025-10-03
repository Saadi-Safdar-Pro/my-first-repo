function speakText() {
  const text = document.getElementById("text-input").value.trim();
  
  if (!text) {
    alert("Please type something!");
    return;
  }

  const speech = new SpeechSynthesisUtterance(text);
  speech.lang = "en-US";
  speechSynthesis.speak(speech);
}
