# Add all the source files to the VARIABLE: DIR_LIB_SRCS
aux_source_directory(. DIR_LIB_SRCS)

add_library(slib ${DIR_LIB_SRCS})