#include <stdio.h>

int main(void) {
  int first_user_int, second_user_int, smaller_int, larger_int, sum;

  printf("Input the first integer: ");
  scanf("%d", &first_user_int);
  printf("Input the second integer: ");
  scanf("%d", &second_user_int);

  if (first_user_int <= second_user_int) {
    smaller_int = first_user_int;
    larger_int = second_user_int;
  } else {
    smaller_int = second_user_int;
    larger_int = first_user_int;
  }

  for (int i = smaller_int; i <= larger_int; i++) {
    if (i % 17 != 0) {
      sum += i;
    }
  }

  printf("Sum: %d", sum);
  return 0;
}


// 39. Sum all numbers between two integers, excluding 
// multiples of 17
//
// Write a C program to calculate the sum of all numbers not 
// divisible by 17 between two given integer numbers.
// Test Data :
// Input the first integer: 50 Input the second integer: 99
// Expected Output:
// Sum: 3521


