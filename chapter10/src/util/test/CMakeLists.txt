include_directories(
  ${PROJECT_SOURCE_DIR}/third-party/googletest-release-1.7.0/include
  ${PROJECT_SOURCE_DIR}/src/include
  ${CMAKE_CURRENT_SOURCE_DIR})

link_directories(${library_path})

set(EXECUTABLE_OUTPUT_PATH ${executable_path})

add_executable(util_test util_test.cc)

target_link_libraries(util_test util gtest)
