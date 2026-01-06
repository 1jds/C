#include <stdio.h>

int main(void) {
  int user_input = 0, sum;

  while (user_input <= 0 || user_input > 500) {
    printf("Input a positive number less than 500: ");
    scanf("%d", &user_input);
  }

  int copy_of_user_input = user_input;

  while (copy_of_user_input > 0) {
      sum += copy_of_user_input % 10;
      copy_of_user_input /= 10;
  }

  printf("Sum of the digits of %d is %d \n", user_input, sum);

  return 0;
}


// 62. Compute the sum of the digits of an integer less than 500
//
// Write a C program that accepts a positive integer less than 500 
// and prints out the sum of the digits of this number.
// Input a positive number less than 500:
// Sum of the digits of 347 is 14

