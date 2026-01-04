# Web Development Projects

Frontend projects built with HTML, CSS, JavaScript (and some TypeScript).  
This repository collects small, focused web projects and UI demos intended for learning, portfolio use, and quick experimentation.

---

## Table of contents

- [About](#about)
- [Projects](#projects)
- [Quick start](#quick-start)
- [Notes & requirements](#notes--requirements)
- [How to run / preview locally](#how-to-run--preview-locally)
- [TypeScript projects](#typescript-projects)
- [APIs & keys](#apis--keys)
- [Contributing](#contributing)
- [Structure](#structure)
- [License](#license)
- [Contact](#contact)

---

## About

This repo contains a collection of small front-end web projects and interactive widgets built to practice DOM manipulation, UI patterns, and browser APIs. Projects are standalone, primarily static, and suitable for opening directly in a browser or serving with a lightweight static server.

Technologies used:
- HTML, CSS
- JavaScript (majority)
- TypeScript (some projects)
- Browser APIs (Web Audio, Speech Synthesis, Canvas, Fetch, etc.)

---

## Projects

Each top-level folder is a separate project or demo. Open the folder and launch the provided HTML file in your browser.

- DOM — DOM manipulation demos and examples
- ExpenseTracker — simple expense tracker app (CRUD and local storage)
- FileSizeConverter — convert bytes to KB/MB/GB and vice versa
- JavaScript — assorted JS examples and utilities
- PasswordGenerator — generates secure passwords with options
- QRCodeGenerator — create QR codes from text/URLs
- RealTimeClock — live clock demo
- TextToSpeech — uses Web Speech API (speechSynthesis) for TTS
- calculator — basic calculator UI and logic
- countdown — countdown timer / event timer
- currencyconverter — currency conversion demo (may use external API)
- darkmodetoggle — theme toggle demo (dark/light mode)
- gallery — image gallery / lightbox
- image — image-related demos (manipulation/preview)
- interact — interaction / UI micro-demos
- layout — layout experiments (grids/flexbox)
- login — login form UI demo
- profile — profile card / user UI demo
- quiz — quiz app with scoring
- rpsGame — Rock-Paper-Scissors game
- todo — To-Do list app (local storage)
- weather — weather lookup demo (may use external API)
- 🎵 CustomMusicPlayer — custom audio player UI and controls

Root utility files:
- index.html / index2.html — landing or demo pages
- button.html — button / micro-interaction demo
- script.js, style.css — shared or example scripts/styles

---

## Quick start

Clone the repo and open a project:

```bash
git clone https://github.com/Saadi-Safdar-Pro/web-development-projects.git
cd web-development-projects
# open a project html file with your browser or run a static server
```

---

## How to run / preview locally

Since most projects are static files, you can preview them in any of these ways:

1. Open the project's HTML file directly in your browser (double-click or File → Open).
2. Use VS Code + Live Server extension for auto-reload.
3. Run a simple static server from the repository root:

- Python 3:
  ```bash
  python -m http.server 8000
  # then open http://localhost:8000/<project-folder>/<file>.html
  ```

- Node (http-server):
  ```bash
  npm install -g http-server
  http-server -c-1
  # then open http://localhost:8080/
  ```

If a project uses module imports (ES modules) or TypeScript, use a local server (opening the file directly may cause CORS/module errors).

---

## Notes & requirements

- Browser compatibility: Most demos use modern browser APIs. Use latest Chrome, Firefox, Edge, or Safari for best results.
- Local storage: Apps like todo and ExpenseTracker store data in localStorage — clearing browser data will remove saved items.
- TypeScript: Projects containing .ts files will need compilation to .js using tsc (see below).
- API-based demos (weather, currencyconverter): These may require API keys or CORS-enabled endpoints. Check the project folder for notes or README inside the project.

---

## TypeScript projects

If you find .ts files in a project:

1. Install TypeScript globally or locally:
   ```bash
   npm install -g typescript
   # or in project dir:
   npm init -y
   npm install --save-dev typescript
   ```

2. Transpile:
   ```bash
   tsc path/to/file.ts --outDir path/to/output
   ```
   Or run `tsc --init` to create a tsconfig.json and then `tsc`.

After compilation, open the generated .js file or the HTML referencing it.

---

## APIs & keys

Some projects that fetch remote data (e.g., weather or currency APIs) may require an API key. Check the project's source for fetch calls and instructions. Do not commit secret keys — use environment variables, or provide instructions for users to create their own keys.

---

## Contributing

Contributions are welcome — especially to:
- Add README details inside individual project folders
- Fix bugs or improve UI/UX
- Add tests or TypeScript types
- Provide short demo GIFs or screenshots

Please:
1. Fork the repository
2. Create a branch (feature/bugfix)
3. Make changes and add/commit
4. Open a Pull Request describing your changes

If you'd like me to add specific contribution guidelines, CI, or a license file, open an issue or request it.

---

## Structure

Top-level folders are self-contained projects. Each folder typically includes:
- index.html or a main .html file
- related .css, .js or .ts files
- assets (images, audio) if applicable

Use the repository's index.html / index2.html as a starting point for demos.

---

## License

No license is specified in this repository. If you want this code to be reusable by others, consider adding a license (for example, MIT). I can add a LICENSE file if you tell me which license you prefer.

---

## Contact

Author: Saadi-Safdar-Pro  
GitHub: https://github.com/Saadi-Safdar-Pro

---

Thank you for collecting these projects in one place — it's a great way to practice front-end skills and show a portfolio. If you'd like, I can:
- generate README sections per-project with usage and screenshots,
- add a LICENSE file,
- or create per-project README.md files that describe required inputs (API keys) and expected behavior.