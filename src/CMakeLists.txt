project(jlCxxCalc)

cmake_minimum_required(VERSION 2.8.12)
set(CMAKE_MACOSX_RPATH 1)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

find_package(JlCxx)
get_target_property(JlCxx_location JlCxx::cxxwrap_julia LOCATION)
get_filename_component(JlCxx_location ${JlCxx_location} DIRECTORY)
set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib;${JlCxx_location}")

message(STATUS "Found JlCxx at ${JlCxx_location}")

add_library(jlCxxCalc SHARED jlCxxCalc.cxx)
# required by BinaryBuilder
target_include_directories(jlCxxCalc PRIVATE /workspace/destdir/include/julia)
target_link_libraries(jlCxxCalc JlCxx::cxxwrap_julia)

install(TARGETS
    jlCxxCalc
LIBRARY DESTINATION lib
ARCHIVE DESTINATION lib
RUNTIME DESTINATION lib)