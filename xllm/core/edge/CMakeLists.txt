include(cc_library)
include(cc_binary)
include(cc_test)

cc_library(
  NAME 
    master
  HDRS
    master.h
  SRCS
    master.cpp
  DEPS
    :common
)