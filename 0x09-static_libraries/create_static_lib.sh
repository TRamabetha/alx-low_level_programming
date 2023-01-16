#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
# Create an empty archive file
ar -rcs liball.a

# Add all .c files to the archive
for file in *.c; do
    ar -r liball.a $file
done
