# 🗃️ Organized — Hardware Inventory Manager in C

[![Language: C](https://img.shields.io/badge/Language-C-00599C.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Build: Make](https://img.shields.io/badge/Build-Makefile-orange.svg)](Makefile)
[![Module: B-CPE-110](https://img.shields.io/badge/Epitech-B--CPE--110-blue.svg)](https://www.epitech.eu/)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

> **Organized is an interactive workshop inventory management CLI**, implementing doubly linked list data structures with dynamic sorting and filtering.

---

## 🎯 Features

- **Hardware Categories:** Actuators, sensors, processors, and wiring devices.
- **Dynamic Linked Lists:** Pure C memory allocation for dynamic item insertion, deletion, and iteration without fixed array limitations.
- **Multi-key Sorting:** Sorting on multiple priority criteria (e.g., `sort -r type name -r id`).
- **Integration with Epitech Shell:** Seamlessly links with Epitech's provided `libshell.a` shell runner.

---

## 🛠️ Build & Usage

```bash
make
./organized
```

### CLI Commands:
```text
add ACTUATOR motor, SENSOR temp, PROCESSOR cpu
disp
sort -r type name
del 0
```

---

## 📜 License

Licensed under the **MIT License with attribution** to Lucas Lhomme (Crabe).
