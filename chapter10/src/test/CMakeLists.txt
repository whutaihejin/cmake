include_directories(
  ${PROJECT_SOURCE_DIR}/third-party/googletest-release-1.7.0/include
  ${PROJECT_SOURCE_DIR}/src/include
  ${CMAKE_CURRENT_SOURCE_DIR})

link_directories(${PROJECT_SOURCE_DIR}/lib)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(util_test util_test.cc ../util.cc)

target_link_libraries(util_test gtest gtest_main)
