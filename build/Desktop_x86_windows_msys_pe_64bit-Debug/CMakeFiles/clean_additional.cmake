# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\FEU_Tester_COM_Port_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\FEU_Tester_COM_Port_autogen.dir\\ParseCache.txt"
  "FEU_Tester_COM_Port_autogen"
  )
endif()
