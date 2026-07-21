/* ======================================================================================
 * Library       : vhlibplatform
 * Description   : C++ platform library
 * Revision      : 0.3
 * Source        : https://github.com/vigatron/vhlibplatform
 * Disclaimer    : Provided "AS IS", without warranty.
 * License       : MIT
 * File          : src/vhplatform.hpp
 * Content size  : 609
 * Date / Time   : 21-07-2026 06:59:29
 * MD5           : 6451628f8569ba8c2c56caa37a634a48
 * Notes         : MD5 = file content without header/footer
 * Encoding      : UTF-8
 * Author        : Viktor Glebov / V01G04A81
 * Copyright     : © 2006–2026 Viktor Glebov
 * ========================[ BEGIN FILE CONTENT ]====================================== */
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
/* ========================[  END FILE CONTENT  ]========================
 * Library          : vhlibplatform
 * File             : src/vhplatform.hpp
 * Revision         : 0.3
 * Content size     : 609
 * Date / Time      : 21-07-2026 06:59:29
 * MD5              : 6451628f8569ba8c2c56caa37a634a48
 * Copyright        : © 2006–2026 Viktor Glebov
 * ====================================================================== */