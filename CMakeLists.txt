
# Set the required cmake version
cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(CoreEnginer VERSION 0.01)

# Set the compiler
set(CMAKE_C_COMPILER "/usr/bin/clang" CACHE STRING "C compiler" FORCE)
set(CMAKE_CXX_COMPILER "/usr/bin/clang++" CACHE STRING "C++ compiler" FORCE)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS_DEBUG "-O3 -g")

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

# Include the source code into the project
include_directories(
    ${PROJECT_SOURCE_DIR}/types/include
    ${PROJECT_SOURCE_DIR}/types/src
    ${PROJECT_SOURCE_DIR}/core/include
    ${PROJECT_SOURCE_DIR}/core/src
)

# Add the core library
add_library(CoreLibrary INTERFACE)

# Include the required sources for the core library
target_include_directories(CoreLibrary
    INTERFACE
    ${PROJECT_SOURCE_DIR}/types/include
    ${PROJECT_SOURCE_DIR}/core/include
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
