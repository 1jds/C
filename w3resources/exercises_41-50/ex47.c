#include <stdio.h>

int main(void) {
  int user_input;

  printf("Input an integer: ");
  scanf("%d", &user_input);
  printf("All the divisors of %d are: \n", user_input);

  for (int i = 1; i <= user_input; i++) {
    if (user_input % i == 0) {
      printf("%d\n", i);
    }
  }

  return 0;
}


// 47. Find all divisors of a given integer
//
// Write a C program that finds all the divisors of an integer.
// Test Data:
// Input an integer: 45
// Expected Output:
// All the divisor of 45 are:
// 1
// 3
// 5
// 9
// 15
// 45

