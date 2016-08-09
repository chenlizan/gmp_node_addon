#!/bin/bash

. ./scripts/env.sh

cd $GMP_DEPS

./configure --prefix=$BUILD --enable-shared=no CFLAGS='-fPIC -m64 -static'

make

make install

'-static -std=gnu99 -static-libgcc -static-libstdc++ -fPIC'