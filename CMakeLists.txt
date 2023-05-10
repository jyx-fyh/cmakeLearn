cmake_minimum_required(VERSION 3.5)
project(cmake)
add_subdirectory(libs)
set(CMAKE_CXX_STANDARD 11)
set(SRC src/main.c src/student.c)
#aux_source_directory(src/ SRC)
set(LIB myMath play)
include_directories(
        "include"
        "libs/myMath/include"
        "3rdParty/include")
link_directories(3rdParty/bin)
add_executable(cmake.exe ${SRC})
target_link_libraries(cmake.exe ${LIB})
