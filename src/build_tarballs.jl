# Note that this script can accept some limited command-line arguments, run
# `julia build_tarballs.jl --help` to see a usage message.
using BinaryBuilder, Pkg

name = "DGGRID"
version = v"0.1.0"

# Collection of sources required to complete build
sources = [
    # remote files for publishing
    # GitSource("https://github.com/danlooo/dggrid-julia", "278435a5ca72fe8fa6a836d45f6150c69aa234a3")

    # local files for debugging
    DirectorySource("src", target="dggrid-julia/src")
]

# Bash recipe for building across all platforms
script = raw"""
cd $WORKSPACE/srcdir/dggrid-julia/src
cp LICENSE ..
export JlCxx_DIR=/workspace/$target/destdir/lib/cmake/JlCxx/
cmake -DCMAKE_INSTALL_PREFIX=$prefix -DCMAKE_TOOLCHAIN_FILE=${CMAKE_TARGET_TOOLCHAIN} -DCMAKE_BUILD_TYPE=Release -WITH_GDAL=ON  .
make -j${nproc}

mkdir -p $libdir
case "$target" in
    *w64*)  cp *.dll* $libdir;;
    *)      cp lib/* $libdir;;
esac
"""

# These are the platforms we will build for by default, unless further
# platforms are passed in on the command line
platforms = [
    # see https://github.com/JuliaInterop/CxxWrap.jl/issues/327
    Platform("x86_64", "linux"; libc="glibc", julia_version="1.8")

    # Platform("x86_64", "linux"; libc="glibc", julia_version="1.8"),
    # Platform("aarch64", "linux"; libc="glibc", julia_version="1.8")
    # Platform("x86_64", "macos"; julia_version="1.8"),
    # Platform("aarch64", "macos"; julia_version="1.8"),
    # Platform("x86_64", "windows"; julia_version="1.8")
]

# all availabble ones
# platforms = supported_platforms()

# Fix incompatibilities across GCC 4/5, because of std::string
platforms = expand_cxxstring_abis(platforms)

# The products that we will ensure are always built
products = [
    LibraryProduct("libjlDGGRID", :libjlDGGRID)
]

# Dependencies that must be installed before this package can be built
dependencies = [
    BuildDependency(PackageSpec(name="libjulia_jll", uuid="5ad3ddd2-0711-543a-b040-befd59781bbf")),
    BuildDependency(PackageSpec(name="libcxxwrap_julia_jll", uuid="3eaa8342-bff7-56a5-9981-c04077f7cee7")),
    Dependency(PackageSpec(name="GDAL_jll", uuid="a7073274-a066-55f0-b90d-d619367d196c"))
]

# Build the tarballs, and possibly a `build.jl` as well.
build_tarballs(ARGS, name, version, sources, script, platforms, products, dependencies; julia_compat="1.8", preferred_gcc_version=v"9.1.0")
