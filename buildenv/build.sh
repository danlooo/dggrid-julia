#!/usr/bin/env bash

# load julia paths etc.
source /root/.profile

echo "BUILD DIRECTORY $1"

export JULIA_LOAD_PATH="@:@v#.#:@stdlib:`pwd`"
export LD_LIBRARY_PATH="`pwd`${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}"

cd $1
make
mkdir ../out
cp -t ../out *.so *.cxx *.h *.jl
cd ..
echo "BUILD FINISHED. OUTPUT DIRECTORY $PWD/$1"