cmake_minimum_required(VERSION 3.12)
project(allegrotry C)

set(CMAKE_C_STANDARD 99)
INCLUDE_DIRECTORIES( /usr/local/Cellar/allegro/5.2.4.0/include )

LINK_DIRECTORIES( /usr/local/Cellar/allegro/5.2.4.0/lib )



add_executable(allegrotry main.c)
add_executable(myinput myinput.c)
file(GLOB LIBRARIES "/usr/local/Cellar/allegro/5.2.4.0/lib/*.dylib")
message("LIBRARIES = ${LIBRARIES}")
TARGET_LINK_LIBRARIES(allegrotry  ${LIBRARIES})
TARGET_LINK_LIBRARIES(myinput ${LIBRARIES})
