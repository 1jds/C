#include <stdio.h>
#include <math.h>

int main(void) {
  puts("=======================================");
  puts("| n   | 2^n   | 2^-n                  |");
  puts("=======================================");
  for (int i = 0; i <= 10; i++) {
    int pos_pow = pow(2, i);
    double neg_pow = pow(2, -i);
    printf("| %-4d", i);
    printf("| %-5d | %-22lf|\n", pos_pow, neg_pow);
  }

  puts("=======================================");

  return 0;
}


/*
68. Print powers of 2

Write a C program that prints the powers of 2 table 
for the powers 0 to 10, both positive and negative.
=======================================
n || 2^n || 2^-n
=======================================
0 1 1.000000000000
1 2 0.500000000000
2 4 0.250000000000
3 8 0.125000000000
4 16 0.062500000000
5 32 0.031250000000
6 64 0.015625000000
7 128 0.007812500000
8 256 0.003906250000
9 512 0.001953125000
10 1024 0.000976562500
======================================

What you’re expected to do in C

Loop n from 0 to 10

Compute:

pow(2, n) or use bit shifting for integers

pow(2, -n) or 1.0 / pow(2, n)

Print everything in a neat table
*/
