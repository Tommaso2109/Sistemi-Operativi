cmake_minimum_required (VERSION 2.8.11)
project (mini_core_topolino)

include_directories(src)
include_directories(/usr/include/eigen3)

add_subdirectory(executables)
add_subdirectory(src)

