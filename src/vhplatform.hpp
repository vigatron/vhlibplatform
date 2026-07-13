#pragma once

#include <cstdint>
#include <cstring>
#include <climits>

#include <string>
#include <string_view>
#include <array>
#include <vector>
#include <iostream>

using u8  = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;

using verr = u32;
constexpr verr vok = 0;
constexpr verr verror(u32 code) noexcept { return code; }

constexpr size_t F1K = 1024;
constexpr size_t F1M = 1024 * 1024;

verr verrmsg(int x, const char * msg);
verr verrmsg(int x, std::string strerr);
verr verrmsg(int x, std::string_view strerr);

void asrts(bool cond, int module, std::string_view msg);


#include "vhbits.hpp"
