# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Rafael Gomez Guillen alu0101462578
# @date Enero 10 2022
# @brief CMakeLists.txt for the Fecha class exercise
# CMakeLists.txt defines the whole build
# CMake reads CMakeLists.txt sequentially
#
# Build process:
#   1. cd <project_folder>
#   2. mkdir build
#   3. cd build
#   4. cmake ..
#   5. make


cmake_minimum_required(VERSION 3.1)  # Mandatory

# set the project name 
project(Fecha                # Mandatory
    VERSION 1.0
    DESCRIPTION "Fecha class"
    LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17) 						# Use c++17
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# tell cmake to output binaries here:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# Debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -pedantic -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# tell cmake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIR}/src)

# Adds an executable target called "runTests" to be built from the source files listed in the command invocation.
add_executable(runTests
    test/gtest_main.cc
    src/Fecha.h
    src/Fecha.cc
    test/test_Fecha.cc)

# Adds an executable target called "Fecha_main" to be built from the source files listed in the command invocation.
add_executable(Fecha_main
    src/Fecha.h
    src/Fecha.cc
	src/Fecha_main.cc)

target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)

# Add expected compiler features to a target.
target_compile_features(runTests PRIVATE cxx_std_17)

# Add compile options to a target.
target_compile_options(runTests PRIVATE -Wall -Wextra -Wpedantic -Weffc++)
target_compile_options(Fecha_main PRIVATE -Wall -Wextra -Wpedantic -Weffc++)
