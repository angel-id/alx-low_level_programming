#!/bin/bash
gcc -c *.c
ar rc -L. liball.a *.o 
