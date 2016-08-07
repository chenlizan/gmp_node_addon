#!/bin/bash

. ./scripts/env.sh

cd $GMP_DEPS

./configure --prefix=$BUILD --enable-shared=no CFLAGS=-fPIC CXXFLAGS=-fPIC

make

make install
