ADD_LIBRARY(mysqrt mysqrt.cc)

INSTALL (TARGETS mysqrt DESTINATION bin)
INSTALL (FILES mysqrt.h DESTINATION include)
