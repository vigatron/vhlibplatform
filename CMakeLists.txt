cmake_minimum_required(VERSION 3.16)
project(vhlibplatform VERSION 0.4.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/version.h.in"
    "${CMAKE_CURRENT_BINARY_DIR}/generated/version_vhplatform.h"
)

file(GLOB_RECURSE srcfiles src/*)

add_library(vhlib_platform STATIC ${srcfiles})

target_include_directories(vhlib_platform PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    "${CMAKE_CURRENT_BINARY_DIR}/generated"
)
