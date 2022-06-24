# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\map_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\map_autogen.dir\\ParseCache.txt"
  "map_autogen"
  )
endif()
