#!/bin/bash
gcc -Wall -Pedandic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
