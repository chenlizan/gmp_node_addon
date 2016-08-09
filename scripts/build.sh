#!/bin/bash

. ./scripts/env.sh

cd $GMP_DEPS

#ln -s `g++ -print-file-name=libgcc.a`
#ln -s `g++ -print-file-name=libstdc++.a`

./configure --prefix=$BUILD --enable-shared=no CFLAGS='-fPIC'

make

make install

#'-pthread -lrt -static -ldl -static-libgcc -static-libstdc++ -fPIC'