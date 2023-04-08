#!bin/bash
gcc -c -wall -werror -wextra *.c
ar -rc liball.a *.o
ranlib liball.a