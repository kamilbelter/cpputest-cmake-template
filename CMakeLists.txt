cmake_minimum_required(VERSION 3.23.2)
project(cpputestTestDemo)

set(APP_NAME funcApp)
set(APP_LIB_NAME funcAppLib)

add_subdirectory(src)

option(COMPILE_UT "Compile the tests" OFF)
if (COMPILE_UT)
   add_subdirectory(tests)
endif(COMPILE_UT)
