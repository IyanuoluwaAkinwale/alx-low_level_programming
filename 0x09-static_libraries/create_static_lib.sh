#!/bin/bash

# Find all .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name "*.c")

# Compile .c files into object files
for file in $c_files; do
    gcc -c $file
done

# Create a static library from the object files
ar rcs liball.a *.o

# Clean up the object files
rm -f *.o

