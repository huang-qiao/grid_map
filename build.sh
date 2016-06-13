#!/bin/bash

PROJECT_ROOT=`pwd`
BUILD_DIR=${PROJECT_ROOT}/build
INSTALL_DIR=${PROJECT_ROOT}/install
mkdir -p $BUILD_DIR
mkdir -p $INSTALL_DIR

cd $BUILD_DIR
cmake \
  -D CMAKE_BUILD_TYPE=Debug \
  -D CMAKE_INSTALL_PREFIX=$INSTALL_DIR \
  ..

make install
