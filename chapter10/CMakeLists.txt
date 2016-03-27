cmake_minimum_required(VERSION 2.8)

project(chapter10 CXX C)

set(library_path ${PROJECT_BINARY_DIR}/lib)
set(executable_path ${PROJECT_SOURCE_DIR}/bin)

add_subdirectory(third-party)

add_subdirectory(src)
