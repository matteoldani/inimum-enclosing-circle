#!/bin/bash
$1
clear
gcc -o mec mec.c -lm
./mec $1
