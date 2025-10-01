export const portfolioData = {
  personal: {
    name: "Saadi",  // ← CHANGE TO YOUR NAME
    title: "Full Stack Developer",
    bio: "Passionate about creating amazing web experiences with modern technologies. I love turning complex problems into simple, beautiful designs.",
    email: "your.email@example.com",  // ← CHANGE TO YOUR EMAIL
    location: "Your City, Country",   // ← CHANGE TO YOUR LOCATION
    social: {
      github: "yourusername",
      linkedin: "yourusername",
      twitter: "yourusername"
    }
  },
  
  skills: [
    { name: "React", level: 90, category: "Frontend", icon: "⚛️" },
    { name: "JavaScript", level: 85, category: "Frontend", icon: "🟨" },
    { name: "HTML/CSS", level: 95, category: "Frontend", icon: "🎨" },
    { name: "Node.js", level: 80, category: "Backend", icon: "🟢" },
    { name: "Python", level: 75, category: "Backend", icon: "🐍" },
    { name: "UI/UX Design", level: 85, category: "Design", icon: "✨" },
    { name: "Git & GitHub", level: 90, category: "Tools", icon: "📚" },
    { name: "Responsive Design", level: 95, category: "Frontend", icon: "📱" }
  ],
  
  projects: [
    {
      id: 1,
      title: "ReactBits Portfolio",
      description: "An interactive portfolio built using all ReactBits patterns including custom hooks, animations, and background effects.",
      technologies: ["React", "CSS Animations", "Custom Hooks", "Vite"],
      liveUrl: "#",
      githubUrl: "#",
      image: "/project1.jpg",
      featured: true
    },
    {
      id: 2,
      title: "E-Commerce Dashboard",
      description: "A responsive admin dashboard with real-time analytics and interactive charts.",
      technologies: ["React", "Chart.js", "Node.js", "MongoDB"],
      liveUrl: "#",
      githubUrl: "#",
      image: "/project2.jpg",
      featured: true
    },
    {
      id: 3,
      title: "Task Management App",
      description: "A drag-and-drop task manager with real-time collaboration features.",
      technologies: ["React", "Socket.io", "Express", "PostgreSQL"],
      liveUrl: "#",
      githubUrl: "#",
      image: "/project3.jpg",
      featured: false
    }
  ],
  
  experience: [
    {
      id: 1,
      company: "Tech Solutions Inc.",
      position: "Frontend Developer",
      period: "2023 - Present",
      description: "Developed responsive web applications using React and modern JavaScript. Collaborated with design teams to implement pixel-perfect UIs.",
      achievements: [
        "Improved application performance by 40%",
        "Led migration to React hooks",
        "Mentored 2 junior developers"
      ]
    },
    {
      id: 2,
      company: "Digital Agency",
      position: "Web Developer",
      period: "2021 - 2023",
      description: "Built and maintained client websites using modern web technologies. Focused on creating accessible and performant web experiences.",
      achievements: [
        "Delivered 50+ client projects",
        "Implemented responsive design patterns",
        "Reduced load times by 60%"
      ]
    }
  ],
  
  education: [
    {
      id: 1,
      institution: "University of Technology",
      degree: "Bachelor of Computer Science",
      period: "2018 - 2022",
      description: "Focused on software engineering, algorithms, and web technologies."
    }
  ]
};