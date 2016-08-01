#!/bin/bash

ROOT=`pwd`
DEPS=$ROOT/deps
BUILD=$ROOT/build/gmp
GMP_VERSION=6.1.1
GMP=gmp-$GMP_VERSION
GMP_DEPS=$DEPS/gmp
GMP_FILE=/tmp/$GMP.tar.bz2
#ZK_URL=http://apache.mirrors.tds.net/zookeeper/$ZK/$ZK.tar.gz
GMP_URL=https://gmplib.org/download/gmp/$GMP.tar.bz2
#PATCHES=$(ls $ROOT/patches/*.patch 2>/dev/null || echo -n)

#https://gmplib.org/download/gmp/gmp-6.1.1.tar.bz2