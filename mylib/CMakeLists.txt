# Add all the source files to the VARIABLE: DIR_LIB_SRCS
# aux_source_directory(. DIR_LIB_SRCS)
set (TINYQ_SOURCES
    math/sayHi.cc
)

set (TINYQ_HEADERS
math/sayHi.h)

add_library(tinyQlib 
    ${TINYQ_SOURCES}
    ${TINYQ_HEADERS})
