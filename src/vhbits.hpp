/* ======================================================================================
 * Library       : vhlibplatform
 * Description   : C++ platform library
 * Revision      : 0.3
 * Source        : https://github.com/vigatron/vhlibplatform
 * Disclaimer    : Provided "AS IS", without warranty.
 * License       : MIT
 * File          : src/vhbits.hpp
 * Content size  : 2052
 * Date / Time   : 21-07-2026 06:59:29
 * MD5           : bb8d49a88b110c87d1ad2c7bb37a8406
 * Notes         : MD5 = file content without header/footer
 * Encoding      : UTF-8
 * Author        : Viktor Glebov / V01G04A81
 * Copyright     : © 2006–2026 Viktor Glebov
 * ========================[ BEGIN FILE CONTENT ]====================================== */
#pragma once

#include <cstdint>
#include <cstring>
#include <climits>

#include <utility>

#include <vector>


class VHBits {
public:

    /**
     * @brief Index to [byteidx,bitidx] conversion
     */
    constexpr static std::pair<size_t, uint8_t> splidx(size_t v) noexcept {
        return { v / CHAR_BIT, static_cast<uint8_t>((CHAR_BIT-1) - (v & (CHAR_BIT-1))) };
    }

    /**
     * @brief Bitnumber to mask conversion
     */
    constexpr static uint8_t mask(uint8_t bitn) noexcept { 
        return 1 << bitn;
    }

    /**
     * @brief Bytearray to Bitsarray conversion
     */
    static std::vector<uint8_t> convert(const std::vector<uint8_t> & arr) {

        std::vector<uint8_t> r;
        r.reserve(arr.size() * CHAR_BIT);

        for(const uint8_t b : arr) {
            for (int i = CHAR_BIT - 1; i >= 0; --i) {
                r.push_back((b >> i) & 1);
            }
        }

        return r;
    }

    /**
     * @brief Bits manipulation: Clear
     */
    static void BitClr(std::vector<uint8_t> & arr, size_t n) {
        auto [byteIdx, bitIdx] = splidx(n);
        arr[byteIdx] &= ~ mask(bitIdx);
    }

    /**
     * @brief Bits manipulation: Set
     */
    static void BitSet(std::vector<uint8_t> & arr, size_t n) {
        auto [byteIdx, bitIdx] = splidx(n);
        arr[byteIdx] |= mask(bitIdx);
    }

    /**
     * @brief Bits manipulation: BitValue()
     */
    static bool BitVal(const std::vector<uint8_t> & arr, size_t n) {
        auto [byteIdx, bitIdx] = splidx(n);
        return (arr[byteIdx] & mask(bitIdx)) != 0;
    }


    /**
     * @brief Speed-optimized routines
     */

    static void BitClr(uint8_t *ptr, int n) {
        auto [byteIdx, bitIdx] = splidx(n);
        ptr[byteIdx] &= ~ mask(bitIdx);
    }

    static void BitSet(uint8_t *ptr, int n) {
        auto [byteIdx, bitIdx] = splidx(n);
        ptr[byteIdx] |= mask(bitIdx);
    }

    static bool BitVal(uint8_t *ptr, int n) {
        auto [byteIdx, bitIdx] = splidx(n);
        return (ptr[byteIdx] & mask(bitIdx)) != 0;
    }

};
/* ========================[  END FILE CONTENT  ]========================
 * Library          : vhlibplatform
 * File             : src/vhbits.hpp
 * Revision         : 0.3
 * Content size     : 2052
 * Date / Time      : 21-07-2026 06:59:29
 * MD5              : bb8d49a88b110c87d1ad2c7bb37a8406
 * Copyright        : © 2006–2026 Viktor Glebov
 * ====================================================================== */