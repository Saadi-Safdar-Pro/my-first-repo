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
// import SplitText from "./components/SplitText/SplitText";

// function App() {
//   return (
//     <div style={{ fontSize: "2rem", margin: "2rem" }}>
//       <SplitText text="Hello Saadi, your animation works!" delay={100} duration={0.6} />
//     </div>
//   );
// }

// export default App;





import React from "react";
import SplitText from "./components/SplitText/SplitText";

function App() {
  return (
    <div style={{ fontSize: "2rem", margin: "2rem" }}>
      <SplitText
        text="Hello Saadi, ReactBits is working!"
        className="font-bold text-blue-600"
      />
    </div>
  );
}

export default App;
