// import { useState } from 'react'
// import reactLogo from './assets/react.svg'
// import viteLogo from '/vite.svg'
// import './App.css'

// function App() {
//   const [count, setCount] = useState(0)

//   return (
//     <>
//       <div>
//         <a href="https://vite.dev" target="_blank">
//           <img src={viteLogo} className="logo" alt="Vite logo" />
//         </a>
//         <a href="https://react.dev" target="_blank">
//           <img src={reactLogo} className="logo react" alt="React logo" />
//         </a>
//       </div>
//       <h1>Vite + React</h1>
//       <div className="card">
//         <button onClick={() => setCount((count) => count + 1)}>
//           count is {count}
//         </button>
//         <p>
//           Edit <code>src/App.jsx</code> and save to test HMR
//         </p>
//       </div>
//       <p className="read-the-docs">
//         Click on the Vite and React logos to learn more
//       </p>
//     </>
//   )
// }

// export default App



// import React from "react";
// import { helix } from "ldrs";

// helix.register();

// function App() {
//   return (
//     <div style={{ 
//       display: "flex", 
//       justifyContent: "center", 
//       alignItems: "center", 
//       height: "100vh" 
//     }}>
//       <l-helix size="60" speed="2" color="blue"></l-helix>
//     </div>
//   );
// }

// export default App;




// import React from "react";
// import { helix } from "ldrs"; // import a spinner

// // Register spinner (only once in your app, e.g. App.jsx)
// helix.register();

// function App() {
//   return (
//     <div style={{ 
//       display: "flex", 
//       justifyContent: "center", 
//       alignItems: "center", 
//       height: "100vh" 
//     }}>
//       {/* Use the spinner like a normal HTML tag */}
//       <l-helix size="60" speed="2.5" color="blue"></l-helix>
//     </div>
//   );
// }

// export default App;





// import { orbit, ring } from "ldrs";

// orbit.register();
// ring.register();

// function App() {
//   return (
//     <div>
//       <l-orbit size="45" speed="1.5" color="green"></l-orbit>
//       <l-ring size="50" stroke="5" speed="2" color="red"></l-ring>
//     </div>
//   );
// }

// export default App;





// import React from "react";
// import { helix, orbit, ring } from "ldrs";

// // Register all the spinners you want to use
// helix.register();
// orbit.register();
// ring.register();

// function App() {
//   return (
//     <div
//       style={{
//         display: "flex",
//         justifyContent: "center",
//         alignItems: "center",
//         gap: "50px",
//         height: "100vh",
//       }}
//     >
//       {/* Blue Helix */}
//       <l-helix size="60" speed="2.5" color="blue"></l-helix>

//       {/* Green Orbit */}
//       <l-orbit size="45" speed="1.5" color="green"></l-orbit>

//       {/* Red Ring */}
//       <l-ring size="50" stroke="5" speed="2" color="red"></l-ring>
//     </div>
//   );
// }

// export default App;




// import React, { useState } from "react";
// import { helix, orbit, ring } from "ldrs";

// // Register spinners once
// helix.register();
// orbit.register();
// ring.register();

// function App() {
//   const [active, setActive] = useState("helix");

//   return (
//     <div
//       style={{
//         display: "flex",
//         flexDirection: "column",
//         justifyContent: "center",
//         alignItems: "center",
//         height: "100vh",
//         gap: "20px",
//       }}
//     >
//       {/* Buttons to toggle */}
//       <div style={{ display: "flex", gap: "10px" }}>
//         <button onClick={() => setActive("helix")}>Helix</button>
//         <button onClick={() => setActive("orbit")}>Orbit</button>
//         <button onClick={() => setActive("ring")}>Ring</button>
//       </div>

//       {/* Conditionally render spinner */}
//       <div>
//         {active === "helix" && (
//           <l-helix size="60" speed="2.5" color="blue"></l-helix>
//         )}
//         {active === "orbit" && (
//           <l-orbit size="45" speed="1.5" color="green"></l-orbit>
//         )}
//         {active === "ring" && (
//           <l-ring size="50" stroke="5" speed="2" color="red"></l-ring>
//         )}
//       </div>
//     </div>
//   );
// }

// export default App;







// import React, { useState } from "react";
// import { helix, orbit, ring } from "ldrs";

// // Register spinners once
// helix.register();
// orbit.register();
// ring.register();

// function App() {
//   const [active, setActive] = useState("helix");

//   // Simple inline styles for buttons
//   const buttonStyle = (isActive) => ({
//     padding: "10px 20px",
//     border: "none",
//     borderRadius: "8px",
//     backgroundColor: isActive ? "#2563eb" : "#e5e7eb",
//     color: isActive ? "white" : "#111827",
//     cursor: "pointer",
//     fontSize: "16px",
//     fontWeight: "500",
//     transition: "all 0.2s ease-in-out",
//   });

//   return (
//     <div
//       style={{
//         display: "flex",
//         flexDirection: "column",
//         justifyContent: "center",
//         alignItems: "center",
//         height: "100vh",
//         gap: "30px",
//         backgroundColor: "#f9fafb",
//       }}
//     >
//       {/* Buttons to toggle */}
//       <div style={{ display: "flex", gap: "15px" }}>
//         <button
//           style={buttonStyle(active === "helix")}
//           onMouseEnter={(e) => (e.target.style.opacity = "0.85")}
//           onMouseLeave={(e) => (e.target.style.opacity = "1")}
//           onClick={() => setActive("helix")}
//         >
//           Helix
//         </button>
//         <button
//           style={buttonStyle(active === "orbit")}
//           onMouseEnter={(e) => (e.target.style.opacity = "0.85")}
//           onMouseLeave={(e) => (e.target.style.opacity = "1")}
//           onClick={() => setActive("orbit")}
//         >
//           Orbit
//         </button>
//         <button
//           style={buttonStyle(active === "ring")}
//           onMouseEnter={(e) => (e.target.style.opacity = "0.85")}
//           onMouseLeave={(e) => (e.target.style.opacity = "1")}
//           onClick={() => setActive("ring")}
//         >
//           Ring
//         </button>
//       </div>

//       {/* Conditionally render spinner */}
//       <div>
//         {active === "helix" && (
//           <l-helix size="60" speed="2.5" color="#2563eb"></l-helix>
//         )}
//         {active === "orbit" && (
//           <l-orbit size="60" speed="2" color="#059669"></l-orbit>
//         )}
//         {active === "ring" && (
//           <l-ring size="60" stroke="5" speed="2" color="#dc2626"></l-ring>
//         )}
//       </div>
//     </div>
//   );
// }

// export default App;





// // src/App.jsx
// import React, { useState } from "react"
// import {
//   helix,
//   orbit,
//   spiral,
//   ring,
//   grid
// } from "ldrs" // import spinner loaders

// // Register spinners so they can be used
// helix.register()
// orbit.register()
// spiral.register()
// ring.register()
// grid.register()

// function App() {
//   const spinners = [
//     { name: "Helix", tag: "l-helix" },
//     { name: "Orbit", tag: "l-orbit" },
//     { name: "Spiral", tag: "l-spiral" },
//     { name: "Ring", tag: "l-ring" },
//     { name: "Grid", tag: "l-grid" }
//   ]

//   const [selectedSpinner, setSelectedSpinner] = useState(spinners[0].tag)

//   return (
//     <div style={{ textAlign: "center", marginTop: "50px" }}>
//       <h1>Pick a Spinner</h1>

//       {/* Dropdown menu */}
//       <select
//         value={selectedSpinner}
//         onChange={(e) => setSelectedSpinner(e.target.value)}
//         style={{ padding: "10px", fontSize: "16px", marginBottom: "20px" }}
//       >
//         {spinners.map((spinner) => (
//           <option key={spinner.tag} value={spinner.tag}>
//             {spinner.name}
//           </option>
//         ))}
//       </select>

//       {/* Show the selected spinner */}
//       {React.createElement(selectedSpinner, {
//         size: 60,
//         stroke: 4,
//         speed: 1.5,
//         color: "blue"
//       })}
//     </div>
//   )
// }

// export default App




// import React, { useState } from "react"
// import { motion } from "framer-motion"
// import { helix, grid, dots, orbit, ring } from "ldrs"

// // Register spinners
// helix.register()
// grid.register()
// dots.register()
// orbit.register()
// ring.register()

// // Capitalized Motion components
// const MotionH1 = motion.h1
// const MotionDiv = motion.div
// const MotionSelect = motion.select

// export default function App() {
//   const [selectedSpinner, setSelectedSpinner] = useState("helix")

//   const spinners = [
//     { name: "helix", tag: "l-helix" },
//     { name: "grid", tag: "l-grid" },
//     { name: "dots", tag: "l-dots" },
//     { name: "orbit", tag: "l-orbit" },
//     { name: "ring", tag: "l-ring" }
//   ]

//   const activeSpinner = spinners.find((s) => s.name === selectedSpinner)

//   return (
//     <div className="min-h-screen flex flex-col items-center justify-center bg-gray-100">
//       <MotionH1
//         className="text-3xl font-bold mb-6"
//         initial={{ opacity: 0 }}
//         animate={{ opacity: 1 }}
//       >
//         Pick a Spinner
//       </MotionH1>

//       <MotionSelect
//         className="mb-6 p-2 rounded border border-gray-300"
//         value={selectedSpinner}
//         onChange={(e) => setSelectedSpinner(e.target.value)}
//       >
//         {spinners.map((spinner) => (
//           <option key={spinner.name} value={spinner.name}>
//             {spinner.name}
//           </option>
//         ))}
//       </MotionSelect>

//       <MotionDiv
//         key={selectedSpinner}
//         initial={{ opacity: 0, scale: 0.7 }}
//         animate={{ opacity: 1, scale: 1 }}
//         transition={{ duration: 0.4 }}
//       >
//         {activeSpinner && React.createElement(activeSpinner.tag, {
//           size: "60",
//           stroke: "4",
//           speed: "1.5",
//           color: "blue"
//         })}
//       </MotionDiv>
//     </div>
//   )
// }





// // src/App.jsx
// import React, { useState } from "react"
// import { helix, grid } from "ldrs"

// // Register spinners
// helix.register()
// grid.register()

// const spinners = [
//   { name: "Helix", tag: "l-helix" },
//   { name: "Grid", tag: "l-grid" },
// ]

// export default function App() {
//   const [selectedSpinner, setSelectedSpinner] = useState("l-helix")

//   return (
//     <div style={{ textAlign: "center", marginTop: "50px" }}>
//       <h1>Spinner Test</h1>

//       <select
//         value={selectedSpinner}
//         onChange={(e) => setSelectedSpinner(e.target.value)}
//       >
//         {spinners.map((s) => (
//           <option key={s.tag} value={s.tag}>
//             {s.name}
//           </option>
//         ))}
//       </select>

//       <br />
//       <br />

//       {/* Direct JSX usage instead of dangerouslySetInnerHTML */}
//       {selectedSpinner === "l-helix" && (
//         <l-helix size="60" stroke="4" speed="1.5" color="blue"></l-helix>
//       )}
//       {selectedSpinner === "l-grid" && (
//         <l-grid size="60" stroke="4" speed="1.5" color="red"></l-grid>
//       )}
//     </div>
//   )
// }






// import React, { useState } from "react";

// // Import spinners from ldrs
// import "ldrs/dotSpinner";
// import "ldrs/hourglass";
// import "ldrs/ring";
// import "ldrs/grid";
// import "ldrs/spiral";
// import "ldrs/waveform";
// import "ldrs/tailspin";
// import "ldrs/helix";

// function App() {
//   const spinners = {
//     Dot: <l-dot-spinner size="40" speed="0.9" color="blue"></l-dot-spinner>,
//     Hourglass: <l-hourglass size="40" speed="1.2" color="green"></l-hourglass>,
//     Ring: <l-ring size="40" stroke="4" bg-opacity="0.1" speed="2" color="purple"></l-ring>,
//     Grid: <l-grid size="40" speed="1.5" color="red"></l-grid>,
//     Spiral: <l-spiral size="40" speed="1.5" color="teal"></l-spiral>,
//     Waveform: <l-waveform size="40" stroke="3" speed="1" color="orange"></l-waveform>,
//     Tailspin: <l-tailspin size="40" speed="1.2" color="pink"></l-tailspin>,
//     Helix: <l-helix size="40" speed="1.5" color="brown"></l-helix>,
//   };

//   const [selected, setSelected] = useState("Dot");

//   return (
//     <div className="flex flex-col items-center justify-center h-screen space-y-6">
//       <select
//         value={selected}
//         onChange={(e) => setSelected(e.target.value)}
//         className="p-2 border rounded"
//       >
//         {Object.keys(spinners).map((name) => (
//           <option key={name} value={name}>
//             {name}
//           </option>
//         ))}
//       </select>
//       <div>{spinners[selected]}</div>
//     </div>
//   );
// }

// export default App;







// import { useState } from "react";
// import "ldrs/dotSpinner";
// import "ldrs/hourglass";
// import "ldrs/ring";
// import "ldrs/grid";
// import "ldrs/spiral";
// import "ldrs/waveform";
// import "ldrs/tailspin";
// import "ldrs/helix";

// function App() {
//   const [selectedSpinner, setSelectedSpinner] = useState("dotSpinner");

//   const renderSpinner = () => {
//     switch (selectedSpinner) {
//       case "dotSpinner":
//         return <l-dot-spinner size="60" speed="0.9" color="blue"></l-dot-spinner>;
//       case "hourglass":
//         return <l-hourglass size="60" speed="1.2" color="green"></l-hourglass>;
//       case "ring":
//         return <l-ring size="60" stroke="4" bg-opacity="0.1" speed="2" color="purple"></l-ring>;
//       case "grid":
//         return <l-grid size="60" speed="1.5" color="red"></l-grid>;
//       case "spiral":
//         return <l-spiral size="60" speed="1.5" color="orange"></l-spiral>;
//       case "waveform":
//         return <l-waveform size="60" speed="1.5" color="teal"></l-waveform>;
//       case "tailspin":
//         return <l-tailspin size="60" speed="1.5" color="black"></l-tailspin>;
//       case "helix":
//         return <l-helix size="60" speed="1.5" color="brown"></l-helix>;
//       default:
//         return null;
//     }
//   };

//   return (
//     <div style={{ textAlign: "center", padding: "20px" }}>
//       <h1>Select a Spinner</h1>
//       <select onChange={(e) => setSelectedSpinner(e.target.value)} value={selectedSpinner}>
//         <option value="dotSpinner">Dot Spinner</option>
//         <option value="hourglass">Hourglass</option>
//         <option value="ring">Ring</option>
//         <option value="grid">Grid</option>
//         <option value="spiral">Spiral</option>
//         <option value="waveform">Waveform</option>
//         <option value="tailspin">Tailspin</option>
//         <option value="helix">Helix</option>
//       </select>

//       {/* Center container */}
//       <div
//         style={{
//           display: "flex",
//           justifyContent: "center",
//           alignItems: "center",
//           height: "70vh", // centers vertically
//         }}
//       >
//         {renderSpinner()}
//       </div>
//     </div>
//   );
// }

// export default App;






import { useState } from "react";
import "ldrs/dotSpinner";
import "ldrs/hourglass";
import "ldrs/ring";
import "ldrs/grid";
import "ldrs/spiral";
import "ldrs/waveform";
import "ldrs/tailspin";
import "ldrs/helix";

function App() {
  const [selectedSpinner, setSelectedSpinner] = useState("dotSpinner");

  const renderSpinner = () => {
    switch (selectedSpinner) {
      case "dotSpinner":
        return <l-dot-spinner size="60" speed="0.9" color="blue"></l-dot-spinner>;
      case "hourglass":
        return <l-hourglass size="60" speed="1.2" color="green"></l-hourglass>;
      case "ring":
        return <l-ring size="60" stroke="4" bg-opacity="0.1" speed="2" color="purple"></l-ring>;
      case "grid":
        return <l-grid size="60" speed="1.5" color="red"></l-grid>;
      case "spiral":
        return <l-spiral size="60" speed="1.5" color="orange"></l-spiral>;
      case "waveform":
        return <l-waveform size="60" speed="1.5" color="teal"></l-waveform>;
      case "tailspin":
        return <l-tailspin size="60" speed="1.5" color="black"></l-tailspin>;
      case "helix":
        return <l-helix size="60" speed="1.5" color="brown"></l-helix>;
      default:
        return null;
    }
  };

  return (
    <div style={{ height: "100vh", display: "flex", flexDirection: "column" }}>
      {/* Header with dropdown */}
      <div style={{ textAlign: "center", padding: "20px" }}>
        <h1>Select a Spinner</h1>
        <select onChange={(e) => setSelectedSpinner(e.target.value)} value={selectedSpinner}>
          <option value="dotSpinner">Dot Spinner</option>
          <option value="hourglass">Hourglass</option>
          <option value="ring">Ring</option>
          <option value="grid">Grid</option>
          <option value="spiral">Spiral</option>
          <option value="waveform">Waveform</option>
          <option value="tailspin">Tailspin</option>
          <option value="helix">Helix</option>
        </select>
      </div>

      {/* Spinner centered */}
      <div style={{ flex: 1, display: "flex", justifyContent: "center", alignItems: "center" }}>
        {renderSpinner()}
      </div>
    </div>
  );
}

export default App;
