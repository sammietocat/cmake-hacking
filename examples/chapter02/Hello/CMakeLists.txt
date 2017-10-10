cmake_minimum_required(VERSION 3.8)
project(Hello CXX)

#[[ add the "include" directory under the source tree to the search path
  so that the '#include "greeter/about_time.hpp"' directive can be
  resolved ]]
include_directories("${PROJECT_SOURCE_DIR}/include")

# specify source files needed by the executable 'hello' to build
add_executable(hello src/hello.cpp)