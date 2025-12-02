#include <stdio.h>

int main(void) {
  int user_int;

  printf("Input an integer: ");
  scanf("%d", &user_int);

  for (int i = 0; i <= 100; i++) {
    if (i % user_int == 3) {
      printf("%d\n", i);
    }
  }

  return 0;
}


// 32. Print numbers between 1 and 100 with a specific remainder
//
// Write a C program to print all numbers between 1 and 100 which are divided 
// by a specified number and the remainder will be 3.
// Test Data :
// Input an integer: 25
// Expected Output:
// 3
// 28
// 53
// 78
