#include <stdio.h>

int main(void) {
  int user_values[5];
  int sum_of_odds;

  printf("Input the first number: ");
  scanf("%d", &user_values[0]);
  printf("Input the second number: ");
  scanf("%d", &user_values[1]);
  printf("Input the third number: ");
  scanf("%d", &user_values[2]);
  printf("Input the fourth number: ");
  scanf("%d", &user_values[3]);
  printf("Input the fifth number: ");
  scanf("%d", &user_values[4]);

  for(int i = 0; i < 5; i++) {
    if (user_values[i] % 2 != 0) {
      sum_of_odds += user_values[i];
    }
  }

  printf("Sum of all odd values: %d\n", sum_of_odds);
  return 0;
}


// 29. Sum all odd values among 5 inputs
//
// Write a C program that read 5 numbers and sum of all odd values between them.
// Test Data :
// Input the first number: 5
// Input the second number: 7
// Input the third number: 9
// Input the fourth number: 10
// Input the fifth number: 13
// Expected Output:
// Sum of all odd values: 34
//
//
