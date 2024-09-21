#!/bin/bash

# Update and install core packages
sudo apt-get update
sudo apt-get install clang Makefile cmake

#cd ~

# Installs Google Test
#git clone https://github.com/google/googletest.git -b v1.15.2
#cd googletest
#mkdir build
#cd build
#cmake .. -DCMAKE_CXX_STANDARD=17
#make
#sudo make install
