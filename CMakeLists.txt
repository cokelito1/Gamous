cmake_minimum_required (VERSION 2.6)
project(gameboy)

if(UNIX AND NOT APPLE)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu99")
endif()

set(PROJECT_SOURCE_DIR src)
set(SOURCES ${PROJECT_SOURCE_DIR}/main.c ${PROJECT_SOURCE_DIR}/cpu.c ${PROJECT_SOURCE_DIR}/gameboy.c)

add_executable(main ${SOURCES})
