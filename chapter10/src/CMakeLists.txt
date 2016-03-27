include_directories(
  ${PROJECT_SOURCE_DIR}/src/include
  ${CMAKE_CURRENT_SOURCE_DIR})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(main main.cc util.cc)

add_subdirectory(test)
