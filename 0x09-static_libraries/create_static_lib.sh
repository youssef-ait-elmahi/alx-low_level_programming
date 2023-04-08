#!/bin/bash
gcc -c -wall -werror -wextra *.c
ar -rcs liball.a *.o
