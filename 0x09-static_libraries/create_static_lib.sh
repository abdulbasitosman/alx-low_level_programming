#!/bin/bash

# Variables
SRC_DIR="."	# source directory containing c files
LIB_NAME="liball.a"	# static library name

# Generate all .o files from the c files in the dir
gcc -c ${SRC_DIR}/*.c

# Create library file 
ar rcs ${LIB_NAME} *.o

# Clean up the directory by removing the .o files
rm -f *.o
