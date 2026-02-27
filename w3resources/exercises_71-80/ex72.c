#include <stdio.h>

int main(void) {
  double user_input = 0;
  while (user_input >= 0) {
    printf("Input a value (negative): ");
    scanf("%lf", &user_input);
  }
  
  printf("%.2lf", user_input *-1.0);

  return 0;
}


/*
72. Remove a negative sign from a number

Write a C program to remove any negative sign in front of a number.
Input a value (negative):
Original value = -253
Absolute value = 253
*/
