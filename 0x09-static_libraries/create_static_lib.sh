#!/bin/bash

gcc -Wall -padentic -Werror -Wextra -c *.c

ar -rc liball.a *.o

ranlib liball.a
