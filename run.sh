#!/bin/bash
set -e

rm -rf gtest-1.7.0
unzip gtest-1.7.0.zip
pushd gtest-1.7.0
./configure
make
popd
g++ -isystem gtest-1.7.0/include -pthread test.cpp ./gtest-1.7.0/lib/.libs/libgtest.a -o test
./test --gtest_output=xml
