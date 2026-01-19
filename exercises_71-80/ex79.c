#include <stdio.h>

int main(void) {
  printf("x\tx+2\tx+4\tx+6 \n");
  printf("-------------------------------- \n");
  for (int i = 1; i <= 13; i+= 3) {
    printf("%d\t%d\t%d\t%d \n", i, i+2, i+4, i+6);
  }

  return 0;
}



/*
79. Generate a table with x,x+2,x+4 using loops

Write a C program using looping to produce the following table of values.
Sample Output:

x       x+2     x+4     x+6
--------------------------------
1       3       5       7
4       6       8       10
7       9       11      13
10      12      14      16
13      15      17      19
*/

