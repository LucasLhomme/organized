# Organized — Hardware Asset Inventory System

> **CLI-based inventory manager in C using doubly linked lists.**

## Overview
Interactive asset management system allowing operators to organize hardware devices (actuators, sensors, processors, wires):
- Dynamic addition (`add <type> <name>`) and deletion (`del <id>`)
- Sorted inspection (`sort -r name -type`) supporting multiple priority keys
- Pure dynamic memory management using doubly linked lists

## Build & Usage
```bash
make
./organized
```

## License
Open-source under MIT License.
