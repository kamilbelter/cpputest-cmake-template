if (DEFINED ENV{CPPUTEST_HOME})
   message(STATUS "Using CppUTest home: $ENV{CPPUTEST_HOME}")
   set(CPPUTEST_INCLUDE_DIRS $ENV{CPPUTEST_HOME}/include)
   set(CPPUTEST_LIBRARIES $ENV{CPPUTEST_HOME}/lib)
   set(CPPUTEST_LDFLAGS CppUTest CppUTestExt)
else()
   message(STATUS "CppUTets not found. Install it and set CPPUTEST_HOME env variable")
endif()

set(TEST_APP_NAME ${APP_NAME}_tests)
set(TEST_SOURCES
    functionTest.cpp
    main.cpp
    )

include_directories(${CPPUTEST_INCLUDE_DIRS} ../src/)
link_directories(${CPPUTEST_LIBRARIES})

add_executable(${TEST_APP_NAME} ${TEST_SOURCES})
target_link_libraries(${TEST_APP_NAME} ${APP_LIB_NAME} ${CPPUTEST_LDFLAGS})
add_custom_command(TARGET ${TEST_APP_NAME} COMMAND ./${TEST_APP_NAME} POST_BUILD)
