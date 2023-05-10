cmake_minimum_required(VERSION 3.5)
project(cmake)

configure_file ("config.h.in" "config.h")
add_subdirectory(libs)
aux_source_directory(src/ SRC)
set(LIB play work)
# 是否使用自己的Math库
option (USE_MYMATH
        "Use provided math implementation"
        ON)

# 是否加入 myMath 库
if (USE_MYMATH)
    include_directories ("libs/myMath/include")
    set (LIB ${LIB} myMath)
else ()
    set (LIB ${LIB} 3rdMath)
endif (USE_MYMATH)


include_directories(
        "include"
        ${PROJECT_BINARY_DIR} #config.h
        "libs/work/include"
        "3rdParty/include")
link_directories("3rdParty/bin")
add_executable(ctest ${SRC})
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
target_link_libraries(ctest ${LIB})
install (TARGETS ctest DESTINATION bin)
