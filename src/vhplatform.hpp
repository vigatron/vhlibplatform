/* ======================================================================================
 * Library       : vhlibplatform
 * Description   : C++ platform library
 * Revision      : 0.4.2
 * Source        : https://github.com/vigatron/vhlibplatform
 * Disclaimer    : Provided "AS IS", without warranty.
 * License       : MIT
 * File          : src/vhplatform.hpp
 * Content size  : 582
 * Date / Time   : 01-08-2026 15:54:26
 * MD5           : 4b6c5fc3d018617456101e00bb8f7002
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
constexpr size_t F1M = 1024 * 1024;

verr verrmsg(int x, const char * msg);
verr verrmsg(int x, std::string strerr);
verr verrmsg(int x, std::string_view strerr);

void asrts(bool cond, int module, std::string_view msg);


#include "vhbits.hpp"
/* ========================[  END FILE CONTENT  ]========================
 * Library          : vhlibplatform
 * File             : src/vhplatform.hpp
 * Revision         : 0.4.2
 * Content size     : 582
 * Date / Time      : 01-08-2026 15:54:26
 * MD5              : 4b6c5fc3d018617456101e00bb8f7002
 * Copyright        : © 2006–2026 Viktor Glebov
 * ====================================================================== */