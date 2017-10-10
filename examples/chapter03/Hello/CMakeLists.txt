cmake_minimum_required(VERSION 3.8)
project(Hello CXX)

# specify the version number
set(HELLO_VERSION_MAJOR 3)
set(HELLO_VERSION_MINOR 1)
set(HELLO_REVISION 0)
set(HELLO_FALSE_CONSTANT 0)

# derive the "config.hpp" from the version numbers specified
# in this script, i.e., HELLO_VERSION_MAJOR and
# HELLO_VERSION_MINOR
configure_file("${PROJECT_SOURCE_DIR}/include/config.hpp.in"
        "${PROJECT_BINARY_DIR}/include/config.hpp" @ONLY)

#[[ add the "include" directory under the binary tree to the search path
  so that the '#include "config.hpp"' directive can be
  resolved ]]
include_directories("${PROJECT_BINARY_DIR}/include")

# specify source files needed by the executable 'hello' to build
add_executable(hello src/hello.cpp)