include_directories(
  ${PROJECT_SOURCE_DIR}/src/include
  ${CMAKE_CURRENT_SOURCE_DIR})

set(EXECUTABLE_OUTPUT_PATH ${executable_path})

add_subdirectory(util)

link_directories(${library_path})

add_executable(main main.cc)
target_link_libraries(main util)

