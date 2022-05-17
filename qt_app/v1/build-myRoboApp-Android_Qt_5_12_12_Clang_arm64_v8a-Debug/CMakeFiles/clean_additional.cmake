# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\myRoboApp_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\myRoboApp_autogen.dir\\ParseCache.txt"
  "myRoboApp_autogen"
  )
endif()
