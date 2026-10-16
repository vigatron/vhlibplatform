/* ======================================================================================
 * Library       : vhlibplatform
 * Description   : C++ platform library
 * Revision      : 0.5.0
 * Source        : https://github.com/vigatron/vhlibplatform
 * Disclaimer    : Provided "AS IS", without warranty.
 * License       : MIT
 * File          : src/vhplatform.hpp
 * Content size  : 952
 * Date / Time   : 16-10-2026 14:05:16
 * MD5           : 2e25d3d6d7212f162960e4976445aac5
 * Notes         : MD5 = file content without header/footer
 * Encoding      : UTF-8
 * Author        : Viktor Glebov / V01G04A81
 * Copyright     : © 2006–2026 Viktor Glebov
 * ========================[ BEGIN FILE CONTENT ]====================================== */
#pragma once

#define VHPLATFORM_INCLUDED

#include <cstdint>
#include <cstring>
#include <climits>

#include <string>
#include <string_view>
#include <array>
#include <vector>
#include <iostream>

using verr = uint32_t;
constexpr verr vok = 0;
constexpr verr verror(uint32_t code) noexcept { return code; }

constexpr size_t F1K = 1024;
constexpr size_t F2K = (F1K * 2);
constexpr size_t F4K = (F1K * 4);
constexpr size_t F8K = (F1K * 8);
constexpr size_t F16K = (F1K * 16);
constexpr size_t F32K = (F1K * 32);
constexpr size_t F64K = (F1K * 64);
constexpr size_t F128K = (F1K * 128);
constexpr size_t F256K = (F1K * 256);
constexpr size_t F512K = (F1K * 512);
constexpr size_t F1M = (F1K * F1K);

verr verrmsg(int x, const char * msg);
verr verrmsg(int x, std::string strerr);

#if VHPLATFORM_VERRMSG_USE_STRING_VIEW
verr verrmsg(int x, std::string_view strerr);
#endif

void asrts(bool cond, int module, std::string_view msg);

#include "vhbits.hpp"
/* ========================[  END FILE CONTENT  ]========================
 * Library          : vhlibplatform
 * File             : src/vhplatform.hpp
 * Revision         : 0.5.0
 * Content size     : 952
 * Date / Time      : 16-10-2026 14:05:16
 * MD5              : 2e25d3d6d7212f162960e4976445aac5
 * Copyright        : © 2006–2026 Viktor Glebov
 * ====================================================================== */