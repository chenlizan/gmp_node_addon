#!/bin/bash

. ./scripts/env.sh

cd $DEPS

echo "Downloading $GMP from $GMP_URL"

curl -C - --fail --output $GMP_FILE $GMP_URL || wget --continue $GMP_URL -O $GMP_FILE

if [ $? != 0 ] ; then
    echo "Unable to download gmp library"
    exit 1
fi

rm -rf $GMP_DEPS

tar jxf $GMP_FILE

mv $GMP $GMP_DEPS

cd $GMP_DEPS