VERSION 0.7
FROM alpine:3.17.2
WORKDIR /work

main:
    BUILD +buildenv

buildenv:
    FROM DOCKERFILE -f buildenv/Dockerfile buildenv
    SAVE IMAGE danlooo/build-cxx-julia
    SAVE ARTIFACT /bin/wrapit AS LOCAL buildenv/bin/wrapit