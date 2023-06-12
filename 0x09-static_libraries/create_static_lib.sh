#!/bin/bash
gcc -wall -pedantic -werror -mextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
