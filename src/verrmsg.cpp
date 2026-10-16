/* ======================================================================================
 * Library       : vhlibplatform
 * Description   : C++ platform library
 * Revision      : 0.5.0
 * Source        : https://github.com/vigatron/vhlibplatform
 * Disclaimer    : Provided "AS IS", without warranty.
 * License       : MIT
 * File          : src/verrmsg.cpp
 * Content size  : 574
 * Date / Time   : 16-10-2026 14:05:16
 * MD5           : dae813d100aaa056c613b7c5c2ecfe3a
 * Notes         : MD5 = file content without header/footer
 * Encoding      : UTF-8
 * Author        : Viktor Glebov / V01G04A81
 * Copyright     : © 2006–2026 Viktor Glebov
 * ========================[ BEGIN FILE CONTENT ]====================================== */
#include "vhplatform.hpp"

/**
 * @brief Print error message to console and return error code.
 * @param x Error return code
 * @param strerr Error message string
 * @return Return value as specified
 */
verr verrmsg(int x, const char * strerr) {
  std::cout << strerr << std::endl;
  return x;
}

/**
 * @brief Print error message to console and return error code.
 * @param x Error return code
 * @param strerr Error message as std::string
 * @return Return value as specified
 */
verr verrmsg(int x, std::string strerr) {
  std::cout << strerr << std::endl;
  return x;
}
/* ========================[  END FILE CONTENT  ]========================
 * Library          : vhlibplatform
 * File             : src/verrmsg.cpp
 * Revision         : 0.5.0
 * Content size     : 574
 * Date / Time      : 16-10-2026 14:05:16
 * MD5              : dae813d100aaa056c613b7c5c2ecfe3a
 * Copyright        : © 2006–2026 Viktor Glebov
 * ====================================================================== */