# vhlibplatform

A minimal, high-performance C++ platform utilities library designed for modern low-level systems and embedded application layers.

[![Version](https://img.shields.io/badge/version-0.4.2-orange.svg)](https://github.com/vigatron/vhlibplatform)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++ Standard](https://img.shields.io/badge/C%2B%2B-17-blue.svg)](https://en.cppreference.com/w/cpp/23)

## Features


- **Fast Bit Manipulation (`VHBits`)**: High-performance routines for safe index splitting, byte-to-bit array streaming, and raw pointer or vector-based bit clearing, setting, and validation.
- **Unified Fixed-Width Types**: Platform error definition handling (`verr`, `vok`).
- **Memory & Safety Diagnostics**: Lightweight diagnostic routines (`asrts`) to quickly capture critical subsystem or module runtime faults.

## Project Structure

```text
vhlibplatform/
├── CMakeLists.txt        # Build system configuration
└── src/
    ├── vhbits.hpp        # Bitwise transformations and optimizations
    ├── vhplatform.hpp    # Fundamental type aliases, macros, and declarations
    └── vhassert.cpp      # Runtime diagnostics and module assertions
```

## Integration via CMake

Incorporate `vhlibplatform` as a static library module in your project layout:

```cmake
cmake_minimum_required(VERSION 3.16)
project(YourProject)

add_subdirectory(vhlibplatform)
target_link_libraries(YourApp PRIVATE vhlib_platform)
```

## Quick Start Example

```cpp
#include "vhplatform.hpp"
#include <iostream>

int main() {
    // 1. Bitwise Operations Example
    std::vector<uint8_t> buffer = { 0x00, 0xFF }; 
    
    // Set bit at zero-based absolute index 4
    VHBits::BitSet(buffer, 4);
    
    // Evaluate if bit at index 4 is true
    bool is_set = VHBits::BitVal(buffer, 4);
    std::cout << "Bit index 4 status: " << std::boolalpha << is_set << std::endl;

    // 2. Diagnostics
    asrts(vok == 0, 101, "Initialization error occurred!");

    return 0;
}
```

## License

This project is licensed under the **MIT License**. See header notices for copyright details (© 2006–2026 Viktor Glebov).
