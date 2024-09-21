#!/bin/bash

mkdir -p build
cd build
cmake ..
make

mv run_test.exe ../run.exe
