#include <stdio.h>

int main(void) {
  int x = 10;
  printf("Predecrementing: \n");
  printf("x = %d \n", x);
  printf("x-- = %d \n", x--);
  printf("x = %d \n", x);
 
  printf("Resetting value of x to 10: \n");
  x = 10;
  printf("x = %d \n", x);
  printf("--x = %d \n", --x);
  printf("x = %d \n", x);

  return 0;
}



/*
78. Demonstrate predecrementing vs postdecrementing

Write a C program to demonstrate the difference between 
predecrementing and postdecrementing using the decrement operator --.
Sample Output:
Predecrementing:
x = 10
x-- = 10
x = 9
*/

