/* ======================================================================================
 * Library       : vhlibplatform
 * Description   : C++ platform library
 * Revision      : 0.4.2
 * Source        : https://github.com/vigatron/vhlibplatform
 * Disclaimer    : Provided "AS IS", without warranty.
 * License       : MIT
 * File          : src/vhassert.cpp
 * Content size  : 206
 * Date / Time   : 01-08-2026 15:54:26
 * MD5           : de168e6e189844c515880aa81f35b0a1
 * Notes         : MD5 = file content without header/footer
 * Encoding      : UTF-8
 * Author        : Viktor Glebov / V01G04A81
 * Copyright     : © 2006–2026 Viktor Glebov
 * ========================[ BEGIN FILE CONTENT ]====================================== */
#include "vhplatform.hpp"

void asrts(bool cond, int module, std::string_view msg) {
    if(cond) return;
    std::cout << "ASSERT: " << " Module: " << module << " Msg: " << msg << std::endl;
    exit(1);
}
/* ========================[  END FILE CONTENT  ]========================
 * Library          : vhlibplatform
 * File             : src/vhassert.cpp
 * Revision         : 0.4.2
 * Content size     : 206
 * Date / Time      : 01-08-2026 15:54:26
 * MD5              : de168e6e189844c515880aa81f35b0a1
 * Copyright        : © 2006–2026 Viktor Glebov
 * ====================================================================== */