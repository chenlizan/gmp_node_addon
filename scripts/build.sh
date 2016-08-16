#!/bin/bash

. ./scripts/env.sh


if [ "$PLATFORM" != "SunOS" ] ; then
  if [ -e "$BUILD/lib/libgmp.la" ]; then
      echo "Gmp has already been built"
      exit 0
  fi

  cd $GMP_DEPS

  ./configure --prefix=$BUILD --disable-assembly --enable-shared=no CFLAGS="-fPIC"

  make

  if [ $? != 0 ] ; then
      echo "Unable to build gmp library"
      exit 1
  fi

  make install
fi


#ln -s `g++ -print-file-name=libgcc.a`
#ln -s `g++ -print-file-name=libstdc++.a`
# CFLAGS="-pthread -lrt -ldl -static -static-libgcc -static-libstdc++ -fPIC'  LDFLAGS="-L. -lgcc -lstdc++"