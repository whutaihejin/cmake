INCLUDE_DIRECTORIES(/tmp/taihejin/include/hello)

ADD_EXECUTABLE(main main.c)

TARGET_LINK_LIBRARIES(main libhello.so)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
