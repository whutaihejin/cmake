include_directories(
  ${PROJECT_SOURCE_DIR}/src/include)

set(LIBRARY_OUTPUT_PATH ${library_path})

add_library(util util.cc)

add_subdirectory(test)
