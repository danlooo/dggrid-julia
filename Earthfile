VERSION 0.7
FROM alpine:3.17.2
WORKDIR /work

# Tooling to build both the c++ and the julia side of the wrapper
build-1-buildenv:
    FROM DOCKERFILE -f src/buildenv/Dockerfile src/buildenv
    SAVE IMAGE danlooo/build-cxx-julia

# Create wrappers for the C++ library
build-2-cpp-wrapper:
    FROM +build-1-buildenv
    COPY src dggrid-julia
    RUN cd dggrid-julia && wrapit --force DGGRID.wit.toml
    LOCALLY
        RUN git commit -am "Update wrapit bindings"
    SAVE ARTIFACT dggrid-julia/DGGRID.jl AS LOCAL src/DGGRID.jl
    SAVE ARTIFACT dggrid-julia/jlDGGRID.cxx AS LOCAL src/jlDGGRID.cxx
    SAVE ARTIFACT dggrid-julia/jlDGGRID.h AS LOCAL src/jlDGGRID.h

# Compile those wrappers with Binary Builder
build-3-jll-wrapper:
    FROM +build-2-cpp-wrapper
    # Binary Builder does not work inside docker and has its own isolated environment
    LOCALLY
        RUN julia src/build_tarballs.jl --deploy="local" --debug

test:
    FROM +build-1-buildenv
    COPY src/DGGRID_jll DGGRID_jll
    COPY products products
    RUN . /root/.profile && \
        cd DGGRID_jll && \
        tar -zxvf ../products/DGGRID.v0.1.0.x86_64-linux-gnu-cxx11-julia_version+1.8.tar.gz && \
        julia --project="." --startup-file=no "test/runtests.jl"