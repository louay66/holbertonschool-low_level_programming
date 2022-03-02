#!/bin/bash
gcc -wall -c *.c
ar -cvq libmy.a *.o
