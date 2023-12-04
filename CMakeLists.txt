cmake_minimum_required(VERSION 3.27)

project(TestMyLib)
message(STATUS "==============================================")
message(STATUS "BINARY dir: " ${PROJECT_BINARY_DIR})
message(STATUS "SOURCE dir: " ${PROJECT_SOURCE_DIR})
message(STATUS "==============================================")

# Find all sources files in the current directory, and store them in DIR_SRCS
# aux_source_directory(. DIR_SRCS)

# target_include_directories(TestMyLib ${PROJECT_SOURCE_DIR})
add_subdirectory(./mylib)

# link_directories(./tinyQLib/)

add_executable(Demo main.cc)

# Link .exe files with static libs
target_link_libraries(Demo PUBLIC tinyQlib)

# After finishing this file：
# 1. cd to the build folder. Run "cmake ../" to generate makefiles.
# 2. Then, run "cmake --build ." to build with makefiles.