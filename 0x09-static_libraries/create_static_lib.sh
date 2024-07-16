#!/bin/bash

# Compile all .c files in the current directory to .o files
gcc -c *.c

# Create the static library from all the .o files
ar rcs liball.a *.o

# Clean up by removing the .o files
rm *.o

