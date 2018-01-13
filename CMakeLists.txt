cmake_minimum_required (VERSION 2.6)
project(gameboy)

set(PROJECT_SOURCE_DIR src)
set(SOURCES ${PROJECT_SOURCE_DIR}/main.c ${PROJECT_SOURCE_DIR}/cpu.c)

add_executable(main ${SOURCES})
