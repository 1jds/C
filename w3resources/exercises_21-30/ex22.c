#include <stdio.h>

int sum_odd_ints(int arr[], int size) {
  int sum = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 != 0) {
      sum += arr[i];
    }
  }
  return sum;
}

int main(void) {
  int user_numbers[5];

  printf("Input the first number: ");
  scanf("%d", &user_numbers[0]);
  printf("Input the second number: ");
  scanf("%d", &user_numbers[1]);
  printf("Input the third number: ");
  scanf("%d", &user_numbers[2]);
  printf("Input the fourth number: ");
  scanf("%d", &user_numbers[3]);
  printf("Input the fifth number: ");
  scanf("%d", &user_numbers[4]);

  printf("Sum of all odd values: %d", sum_odd_ints(user_numbers, 5));
  return 0;
}


// 22. Sum all odd numbers among five inputs
//
// Write a C program that reads 5 numbers and sums all odd values between them.
// Test Data :
// Input the first number: 11
// Input the second number: 17
// Input the third number: 13
// Input the fourth number: 12
// Input the fifth number: 5
// Expected Output:
// Sum of all odd values: 46
//
// NOTES: Pretty sure they mean sum all the odd numbers from among the five entered
