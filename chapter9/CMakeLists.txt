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

# add the executable
ADD_EXECUTABLE (tutorial tutorial.cc)
