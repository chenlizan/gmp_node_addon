#!/bin/bash

ROOT=`pwd`
DEPS=$ROOT/deps
BUILD=$ROOT/src/gmp
GMP_VERSION=6.1.1
GMP=gmp-$GMP_VERSION
GMP_DEPS=$DEPS/gmp
GMP_FILE=/tmp/$GMP.tar.bz2
GMP_URL=https://gmplib.org/download/gmp/$GMP.tar.bz2