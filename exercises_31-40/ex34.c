#include <stdio.h>

int main(void) {
  int user_first_int, user_second_int, lesser_int, greater_int, sum;

  printf("Input a pair of numbers (for example 10,2)\n");
  printf("Input first number of the pair: ");
  scanf("%d", &user_first_int);
  printf("Input second number of the pair: ");
  scanf("%d", &user_second_int);

  if (user_first_int < user_second_int) {
    lesser_int = user_first_int;
    greater_int = user_second_int;
  } else {
    lesser_int = user_second_int;
    greater_int = user_first_int;
  }

  printf("List of odd numbers: \n");
  for (int i = lesser_int; i <= greater_int; i++) {
    if (i % 2 != 0) {
      printf("%d\n", i);
      sum += i;
    }
  }
  printf("Sum=%d", sum);
  return 0;
}


// 34. Sum odd numbers between two given integers
//
// Write a C program to compute the sum of consecutive odd numbers from a given pair of integers.
// Test Data :
// Input a pair of numbers (for example 10,2):
// Input first number of the pair: 10
// Input second number of the pair: 2
// Expected Output:
// List of odd numbers: 3
// 5
// 7
// 9
// Sum=24
