cmake_minimum_required(VERSION 3.27)

project(QLib)

aux_source_directory(. DIR_SRCS)

add_subdirectory(test)

add_executable(main main.cc)

target_link_libraries(main slib)

# After finishing this file, cd to the build folder and run "cmake ../" to generate makefiles.
# Then, run "cmake --build ." to build with makefiles.