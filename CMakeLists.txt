
# Set the required cmake version
cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(CoreEnginer VERSION 0.01)

# Set the compiler
set(CMAKE_C_COMPILER "/usr/bin/clang" CACHE STRING "C compiler" FORCE)
set(CMAKE_CXX_COMPILER "/usr/bin/clang++" CACHE STRING "C++ compiler" FORCE)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Fetch and set up google test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)

FetchContent_MakeAvailable(googletest)

# Create the optimized core library
add_library(CoreLibrary SHARED
    core/src/Order.cpp
)

target_include_directories(CoreLibrary
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Set the test sources
file(GLOB SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/core/src/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/test/*.cpp
    main.cpp
)

# Form the test executable
add_executable(run_test.exe ${SOURCES})

# Link the Google Test library to run
target_link_libraries(run_test.exe gtest)

# Set the compilation options
target_compile_options(run_test.exe PRIVATE -Wall -Wextra -pedantic -Werror)
