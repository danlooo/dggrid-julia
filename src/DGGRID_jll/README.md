# Test package for library output of BinaryBuilder.jl

This directory is intended for testing purposes only.
Yggdrasil will do this automatically using the file [../build_tarballs.jl](../build_tarballs.jl).
The shared library (e.g. [libjlDGGRID.so](libjlDGGRID.so)) compiled by BinaryBuilder.jl can be put here to see if it works correctly, e.g. using:

```
tar -zxvf ../../products/DGGRID.v0.1.0.x86_64-linux-gnu-cxx11-julia_version+1.8.tar.gz lib/libjlDGGRID.so -C .
lib/libjlDGGRID.so
```