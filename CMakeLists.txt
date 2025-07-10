cmake_minimum_required(VERSION 3.10)
project(BMS_Simulator)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(bms_simulator ${SOURCES})

enable_testing()
add_subdirectory(tests)