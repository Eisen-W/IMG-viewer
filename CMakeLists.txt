cmake_minimum_required(VERSION 3.2)
project(IMG-viewer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

find_package(SDL2 REQUIRED)
file(GLOB SOURCES CMAKE_CONFIGURE_DEPENDS "*.cpp")
include_directories(${name} ${SDL2_INCLUDE_DIRS})

set(name IMG-viewer)
add_executable(${name} ${SOURCES})
target_link_libraries(${name} ${SDL2_LIBRARIES})
