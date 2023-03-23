#!/bin/bash
gcc -Wall -Werror -pedantic -Wextra -fPIC -c *.c
gcc -shared -o libdynamic.so *.o

