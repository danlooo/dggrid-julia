project(jlDGGRID)

cmake_minimum_required(VERSION 2.8.12)
set(CMAKE_MACOSX_RPATH 1)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(JlCxx)
get_target_property(JlCxx_location JlCxx::cxxwrap_julia LOCATION)
get_filename_component(JlCxx_location ${JlCxx_location} DIRECTORY)
set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib;${JlCxx_location}")

add_subdirectory(DGGRID)

add_library(jlDGGRID SHARED jlDGGRID.cxx)
target_include_directories(jlDGGRID PRIVATE
    /workspace/destdir/include/julia
    DGGRID/src/apps/dggrid
    DGGRID/src/lib
    DGGRID/src/lib/dglib/include
    DGGRID/src/lib/shapelib/include/shapelib
)
target_link_libraries(jlDGGRID JlCxx::cxxwrap_julia)

install(TARGETS
    jlDGGRID
LIBRARY DESTINATION lib
ARCHIVE DESTINATION lib
RUNTIME DESTINATION lib)