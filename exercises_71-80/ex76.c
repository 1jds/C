#include <stdio.h>

int main(void) {
  printf("Number\tSquare\tCube \n");
  printf("========================= \n");
  for (int i = 0; i <= 20; i++) {
    printf("%d\t%d\t%d \n", i, i * i, i * i * i);
  }

  return 0;
}



/*
76. Print squares and cubes of numbers from 0 to 20

Write a C program to calculate and print the squares and cubes of the 
numbers from 0 to 20. It uses tabs to display them in a table of values.
Sample Output:
Number Square Cube
=========================
0 0 0
1 1 1
2 4 8
3 9 27
.....
18 324 5832
19 361 6859
20 400 8000
*/

