cmake_minimum_required(VERSION 3.16)
project(vhlibplatform LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)

file(GLOB_RECURSE srcfiles src/*)

add_library(vhlib_platform STATIC ${srcfiles})

target_include_directories(vhlib_platform PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

target_compile_definitions(vhlib_platform PUBLIC 
    VHLIB_PLATFORM_VER_MAJ=0
    VHLIB_PLATFORM_VER_MIN=3
)
