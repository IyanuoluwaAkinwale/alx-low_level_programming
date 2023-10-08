#!/bin/bash

# Find all .c files in the current directory and compile them into object files
gcc -c *.c

# Create a static library from the object files
ar rcs liball.a *.o

# Clean up the object files
rm -f *.o

