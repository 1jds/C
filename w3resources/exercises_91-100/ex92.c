#include <stdio.h>

int main(void) {
  int user_input = 0, factorial_result = 1, temp = 0;
  printf("Input a positive integer: ");
  scanf("%d", &user_input);

  for (int i = user_input; i > 0; i--) {
    factorial_result *= i;
  }
  
  while (true) {
    temp = factorial_result % 10;
    if (temp > 0) {
      printf("The last non-zero digit of the said factorial is: %d", temp);
      break;
    } else {
      factorial_result /= 10;
    }
  }

  return 0;
}

/*
92. Get the last nonzero digit of a factorial

Write a C program to find the last non-zero digit of the factorial of a given positive integer.
For example for 5!, the output will be "2" because 5! = 120, and 2 is the last nonzero digit of 120
Sample Output:

Input a positive number:
The last non-zero digit of the said factorial:
0
*/

