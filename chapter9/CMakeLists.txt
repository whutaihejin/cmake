CMAKE_MINIMUM_REQUIRED (VERSION 2.8)
PROJECT (TUTORIAL CXX C)

# the version number
SET (TUTORIAL_VERSION_MAJOR 1)
SET (TUTORIAL_VERSION_MINOR 0)

# configure a header file to pass some of the cmake settings to the source code
CONFIGURE_FILE (
  "${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
  "${PROJECT_BINARY_DIR}/TutorialConfig.h"
  )

# add the binary tree to search path for include files
# so that we will find TutorialConfig.h
INCLUDE_DIRECTORIES (${PROJECT_BINARY_DIR})

OPTION (USE_MYMATH "use tutorial provided math implementation" ON)

IF (USE_MYMATH) 
  INCLUDE_DIRECTORIES (${PROJECT_SOURCE_DIR}/lib)
  ADD_SUBDIRECTORY (lib)
  SET (EXTRA_LIBS ${EXTRA_LIBS} mysqrt)
  MESSAGE (STATUS "EXTRA_LIBS=${EXTRA_LIBS}")
ENDIF (USE_MYMATH)

# add the executable
ADD_EXECUTABLE (tutorial tutorial.cc)
TARGET_LINK_LIBRARIES(tutorial ${EXTRA_LIBS})

INSTALL (TARGETS tutorial DESTINATION bin)
INSTALL (FILES "${PROJECT_BINARY_DIR}/TutorialConfig.h" DESTINATION include)

INCLUDE (CTest)
ADD_TEST (TutorialRuns tutorial 25)

ADD_TEST (TutorialComp25 tutorial 25)

SET_TESTS_PROPERTIES (TutorialComp25 PROPERTIES PASS_REGULAR_EXPRESSION "25 is 5")
