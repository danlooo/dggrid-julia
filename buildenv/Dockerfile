FROM debian:bullseye-slim AS dev
WORKDIR /work
SHELL ["/bin/bash", "-c"]

ENV JULIA_VERSION=1.8.5
ENV BINARYBUILDER_AUTOMATIC_APPLE=true

# Install base dependencies
RUN apt-get update && \
    apt-get install -y build-essential cmake clang libclang-dev git curl
COPY install-julia.sh ./
RUN ./install-julia.sh --yes && \
    source /root/.bashrc  && \
    juliaup add $JULIA_VERSION && \
    juliaup default $JULIA_VERSION && \
    julia -e 'using Pkg; Pkg.add(["CxxWrap", "BinaryBuilder"])'

# Install https://github.com/grasph/wrapit
COPY wrapit/ wrapit/
RUN cd wrapit && cmake . && make && cp wrapit /bin/wrapit

# install https://github.com/JuliaInterop/libcxxwrap-julia
COPY libcxxwrap-julia/ libcxxwrap-julia/
RUN mkdir libcxxwrap-julia-build && \
    cd libcxxwrap-julia-build && \
    cmake -DJulia_EXECUTABLE=/root/.juliaup/bin/julia ../libcxxwrap-julia && \
    cmake --build . --config Release

COPY build.sh .
RUN chmod +x build.sh && cp build.sh /bin/build