# vhlibplatform

**Revision:** 0.5.0
**Author:** V01G04A81 / Viktor Glebov

A minimal, high-performance C++ platform utilities library designed for modern low-level systems and embedded application layers.

## Features

- **Fast Bit Manipulation (`VHBits`)**: High-performance routines for safe index splitting, byte-to-bit array streaming, and raw pointer or vector-based bit clearing, setting, and validation.
- **Unified Fixed-Width Types & Constants**: Platform error definition handling (`verr`, `vok`) and predefined memory size constants (`F1K` to `F1M`).
- **Enhanced Error Messaging**: Lightweight `verrmsg` utilities with flexible support for `const char*`, `std::string`, and `std::string_view`.
- **Memory & Safety Diagnostics**: Zero-allocation diagnostic routines (`asrts`) utilizing `std::string_view` to quickly capture critical subsystem or module runtime faults.

## Project Structure

```text
vhlibplatform/
├── CMakeLists.txt          # Build system configuration
├── version.h.in            # Version template for CMake generation
├── docs/                   # Documentation assets (e.g., license headers/footers)
└── src/
    ├── vhplatform.hpp      # Fundamental type aliases, macros, constants, and declarations
    ├── vhbits.hpp          # Bitwise transformations and optimizations
    ├── vhassert.cpp        # Runtime diagnostics and module assertions
    └── verrmsg.cpp         # Error message formatting and logging utilities
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
#include <vector>

int main() {
    // 1. Bitwise Operations Example
    std::vector<uint8_t> buffer = { 0x00, 0xFF }; 
    
    // Set bit at zero-based absolute index 4
    VHBits::BitSet(buffer, 4);
    
    // Evaluate if bit at index 4 is true
    bool is_set = VHBits::BitVal(buffer, 4);
    std::cout << "Bit index 4 status: " << std::boolalpha << is_set << std::endl;

    // 2. Enhanced Error Messaging
    verr err = verrmsg(101, "Initialization error occurred!");

    // 3. Diagnostics (uses std::string_view for zero-allocation overhead)
    asrts(err == vok, 1, "Critical subsystem failure!");

    return 0;
}
```

## License

This project is licensed under the **MIT License**. See header notices for copyright details (© 2006–2026 Viktor Glebov).
