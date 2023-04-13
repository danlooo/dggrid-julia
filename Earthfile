VERSION 0.7
FROM alpine:3.17.2
WORKDIR /work

main:
    BUILD +buildenv
    BUILD +dggrid-julia

# Tooling to build both the c++ and the julia side of the wrapper
buildenv:
    FROM DOCKERFILE -f buildenv/Dockerfile buildenv
    SAVE IMAGE danlooo/build-cxx-julia

# Original C++ library
# Only needed for testing
dggrid:
    FROM +buildenv
    COPY src/DGGRID DGGRID
    RUN cd DGGRID && mkdir build && cd build && \
        cmake -D CMAKE_BUILD_TYPE=Release ..
    # cache cmake temp files to prevent rebuilding .o files
    # when the .cpp files don't change 
    RUN --mount=type=cache,target=/work/DGGRID/build/CMakeFiles \
        cd /work/DGGRID/build && make

# Create wrappers for the C++ library
dggrid-julia:
    FROM +buildenv
    COPY src dggrid-julia
    RUN bash dggrid-julia/build.sh dggrid-julia
    SAVE ARTIFACT dggrid-julia

# Compile those wrappers with Binary Builder
dggrid-julia-jll:
    FROM +dggrid-julia
    # Binary Builder does not work inside docker and has its own isolated environment
    LOCALLY
    RUN julia src/build_tarballs.jl --deploy="local" --debug