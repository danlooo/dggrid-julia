VERSION 0.7
FROM alpine:3.17.2
WORKDIR /work

# Tooling to build both the c++ and the julia side of the wrapper
buildenv:
    FROM DOCKERFILE -f buildenv/Dockerfile buildenv
    SAVE IMAGE danlooo/build-cxx-julia

# Create wrappers for the C++ library
dggrid-julia:
    FROM +buildenv
    COPY src dggrid-julia
    RUN bash dggrid-julia/build.sh dggrid-julia
    SAVE ARTIFACT dggrid-julia/DGGRID.jl AS LOCAL src/DGGRID.jl
    SAVE ARTIFACT dggrid-julia/jlDGGRID.cxx AS LOCAL src/jlDGGRID.cxx
    SAVE ARTIFACT dggrid-julia/jlDGGRID.h AS LOCAL src/jlDGGRID.h

# Compile those wrappers with Binary Builder
dggrid-julia-jll:
    FROM +dggrid-julia
    # Binary Builder does not work inside docker and has its own isolated environment
    LOCALLY
    RUN julia src/build_tarballs.jl --deploy="local" --debug

test:
    FROM +buildenv
    COPY src/DGGRID src/DGGRID
    RUN cd src/DGGRID && mkdir build && cd build && \
        cmake -D CMAKE_BUILD_TYPE=Release ..
    # cache cmake temp files to prevent rebuilding .o files
    # when the .cpp files don't change 
    RUN --mount=type=cache,target=/work/DGGRID/build/CMakeFiles \
        cd /work/src/DGGRID/build && make