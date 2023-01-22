#!/bin/bash
#compile all the .c files in current directory
gcc -c *.c
#create the static library
ar rcs liball.a *.o
