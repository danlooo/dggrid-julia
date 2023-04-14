project(jlDGGRID)

cmake_minimum_required(VERSION 2.8.12)
set(CMAKE_MACOSX_RPATH 1)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

find_package(jlDGGRID)
get_target_property(jlDGGRID_location jlDGGRID::cxxwrap_julia LOCATION)
get_filename_component(jlDGGRID_location ${jlDGGRID_location} DIRECTORY)
set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib;${jlDGGRID_location}")

message(STATUS "Found jlDGGRID at ${jlDGGRID_location}")

target_include_directories(jlDGGRID PRIVATE /workspace/srcdir/dggrid-julia/src/DGGRID/src/apps/dggrid)

add_library(jlDGGRID SHARED jlDGGRID.cxx)
# required by BinaryBuilder
target_include_directories(jlDGGRID PRIVATE /workspace/destdir/include/julia)
target_link_libraries(jlDGGRID jlDGGRID::cxxwrap_julia)

install(TARGETS
    jlDGGRID
LIBRARY DESTINATION lib
ARCHIVE DESTINATION lib
RUNTIME DESTINATION lib)