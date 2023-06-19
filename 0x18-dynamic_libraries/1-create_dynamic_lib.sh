#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o lliball.so *.o
