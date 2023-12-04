cmake_minimum_required(VERSION 3.27)

project(tinyQlib)
message(STATUS "root This is BINARY dir " ${PROJECT_BINARY_DIR})
message(STATUS "root This is SOURCE dir " ${PROJECT_SOURCE_DIR})

# Find all sources files in the current directory, and store them in DIR_SRCS
aux_source_directory(. DIR_SRCS)

add_subdirectory(./tinyQLib/)

# link_directories(./tinyQLib/)

add_executable(Demo main.cc)

# Link .exe files with static libs
target_link_libraries(Demo tinyQlib)

# After finishing this file：
# 1. cd to the build folder. Run "cmake ../" to generate makefiles.
# 2. Then, run "cmake --build ." to build with makefiles.