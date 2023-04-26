project(jlDGGRID)

cmake_minimum_required(VERSION 2.8.12)
set(CMAKE_MACOSX_RPATH 1)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

# relocation R_X86_64_32 against `.bss' can not be used when making a shared object
add_compile_options(-fPIC)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(JlCxx)
get_target_property(JlCxx_location JlCxx::cxxwrap_julia LOCATION)
get_filename_component(JlCxx_location ${JlCxx_location} DIRECTORY)
set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib;${JlCxx_location}")

add_subdirectory(DGGRID)

add_library(jlDGGRID SHARED jlDGGRID.cxx)
# Includes paths managed by BinaryBuilder.jl 
target_include_directories(jlDGGRID PRIVATE
    /workspace/destdir/lib/
    /workspace/destdir/include/julia
    DGGRID/src/apps/dggrid
    DGGRID/src/lib
    DGGRID/src/lib/dglib/lib
    DGGRID/src/lib/dglib/include/dglib
    DGGRID/src/lib/shapelib/include/shapelib
    DGGRID/src/lib/proj4lib/include/
)
target_link_libraries(jlDGGRID
    JlCxx::cxxwrap_julia
    dglib
    shapelib
    gdal
)

install(TARGETS
    jlDGGRID
LIBRARY DESTINATION lib
ARCHIVE DESTINATION lib
RUNTIME DESTINATION lib)