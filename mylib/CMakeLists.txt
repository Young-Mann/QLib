# Add all the source files to the VARIABLE: DIR_LIB_SRCS
 aux_source_directory(. DIR_LIB_SRCS)
 include_directories(${DIR_LIB_SRCS})
# add_subdirectory()
set (TINYQ_SOURCES
    math/sayHi.cc
    math/rng.cc
    methods/montecarlo.cc
)

set (TINYQ_HEADERS
    math/sayHi.h
    math/rng.h
    methods/montecarlo.h
    )

add_library(tinyQlib STATIC
    ${TINYQ_SOURCES}
    ${TINYQ_HEADERS})

# 2023/12/4: Need the following commands to set the path to find the included files
target_include_directories(tinyQlib PUBLIC
    $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}>
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:${QL_INSTALL_INCLUDEDIR}>)
