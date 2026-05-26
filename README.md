# Voltix

A SPICE-inspired circuit analysis engine written in C using netlist-based input and Kirchhoff’s laws.

---

## Goal

The long-term goal of this project is to take an electrical circuit image as input and generate an analyzed output image displaying calculated electrical values such as branch currents and voltages.

---

## Project Idea

The core idea behind Voltix is to first build a circuit-solving engine in C capable of analyzing electrical circuits through netlist-based representations.

The project will later expand into a hybrid system where:

- Python handles:
  - image processing
  - circuit image parsing
  - visualization and rendering

- C handles:
  - circuit analysis
  - equation generation
  - Kirchhoff law implementation
  - current and voltage calculations

---

## Current Focus

The current focus of the project is to build the core circuit-solving engine before implementing image-processing and AI-based features.

Initial development includes:
- netlist parsing
- component storage systems
- circuit representation
- equation generation
- current calculation

---

## Future Vision

Future versions of Voltix may include:
- image-to-netlist conversion
- automatic circuit detection
- graphical circuit visualization
- matrix-based solving
- SPICE-like simulation capabilities