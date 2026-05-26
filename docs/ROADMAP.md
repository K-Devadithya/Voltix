# Voltix Roadmap

---

# Phase 1 — Project Foundation

## Goals
- Design component structure
- Create dynamic structure arrays
- Implement memory allocation using:
  - malloc()
  - realloc()
- Build basic netlist parser
- Support manual netlist input

## Components Supported
- Resistors
- Voltage sources

## Status
Done in day 1.

---

# Phase 2 — Basic DC Circuit Solver

## Goals
- Solve simple series circuits
- Solve simple parallel circuits
- Calculate:
  - total resistance
  - total current
  - branch current

## Concepts Used
- Ohm’s Law
- Basic circuit analysis

## Status
in progress

---

# Phase 3 — Generalized Netlist Engine

## Goals
- Support arbitrary node numbering
- Improve parser flexibility
- Handle larger circuits
- Add syntax validation
- Detect invalid netlists

## Planned Features
- Better error handling
- Cleaner circuit representation
- Scalable architecture

---

# Phase 4 — Kirchhoff Solver

## Goals
- Implement Kirchhoff’s Current Law (KCL)
- Implement Kirchhoff’s Voltage Law (KVL)
- Automatically generate equations
- Support multi-loop circuits

## Planned Concepts
- Node analysis
- Loop analysis
- Simultaneous equations

---

# Phase 5 — Matrix-Based Solver

## Goals
- Generate coefficient matrices
- Implement Gaussian elimination
- Solve large systems efficiently

## Planned Concepts
- Linear algebra
- Numerical computation
- Matrix solving

---

# Phase 6 — File-Based Netlist Input

## Goals
- Read netlists from files
- Support larger input systems
- Improve parser scalability

## Planned Features
- Custom file format
- Better input handling
- Error reporting

---

# Phase 7 — Advanced Components

## Planned Components
- Current sources
- Capacitors
- Inductors

## Long-Term Goals
- AC circuit analysis
- Frequency response analysis
- Transient analysis

---

# Phase 8 — Visualization System

## Goals
- Generate graphical circuit output
- Display calculated:
  - currents
  - voltages
  - node labels

## Planned Technologies
- Python
- Graph rendering libraries

---

# Phase 9 — AI and Image Processing

## Goals
- Convert circuit images into netlists
- Detect components automatically
- Render solved circuits visually

## Planned Technologies
- OpenCV
- OCR
- AI APIs
- Python image processing

---

# Long-Term Vision

