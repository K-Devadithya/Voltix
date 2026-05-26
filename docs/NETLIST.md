# Netlist Guide

---

# What is a Netlist?

A netlist is a text-based representation of an electrical circuit.

Instead of drawing the circuit graphically, the circuit is described using lines of text where each line represents a component and its connections.

Netlists are commonly used in real-world circuit simulators such as SPICE.

---

# General Format

Each line in the netlist represents one electrical component.

General format:

```text
<ComponentName> <Node1> <Node2> <Value>
```

Example:

```text
R1 1 2 100
```

This means:
- `R1` → Resistor number 1
- Connected between node 1 and node 2
- Resistance value = 100 ohms

---

# Supported Components

## 1. Resistors

Format:

```text
R<number> <node1> <node2> <resistance>
```

Example:

```text
R1 1 2 220
```

Meaning:
- Resistor R1
- Connected between nodes 1 and 2
- Resistance = 220 ohms

---

## 2. Voltage Sources

Format:

```text
V<number> <node1> <node2> <voltage>
```

Example:

```text
V1 1 0 12
```

Meaning:
- Voltage source V1
- Connected between nodes 1 and 0
- Voltage = 12 volts

---

# Understanding Nodes

Nodes represent electrical connection points in a circuit.

Example:

```text
R1 1 2 100
R2 2 0 200
```

Here:
- Node `1` connects to R1
- Node `2` connects R1 and R2
- Node `0` is usually considered Ground

---

# Ground Node

By convention:

```text
0
```

represents the ground/reference node.

Example:

```text
V1 1 0 5
```

means:
- positive terminal connected to node 1
- negative terminal connected to ground

---

# Example Circuit Netlist

```text
V1 1 0 12
R1 1 2 100
R2 2 0 200
```

This represents:
- a 12V source
- two resistors connected in series

---

# Important Rules

- Each component must be written on a new line
- Component names must start with:
  - `R` for resistor
  - `V` for voltage source
- Node values must be integers
- Component values must be positive
- Spaces must separate all values properly

---

# Invalid Example

```text
R1 1 100
```

Reason:
- Missing one node value

---

# Another Invalid Example

```text
X1 1 2 100
```

Reason:
- Unsupported component type

---

# Future Planned Support

Voltix currently supports:
- Resistors
- Voltage sources

Future versions may support:
- Current sources
- Capacitors
- Inductors
- AC analysis
- Advanced circuit simulation