#!/bin/bash
gcc -Wall -pedandic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
