#include <stdio.h>

int main(void) {
  int user_upper_bound;
  
  printf("Input an integer: ");
  scanf("%d", &user_upper_bound);

  printf("List of square of each one of the even values from 1 to %d :\n", user_upper_bound);

  for (int i = 1; i <= user_upper_bound; i++) {
    if (i % 2 == 0) {
      printf("%d^2 = %d\n", i, i * i);
    }
  }

  return 0;
}


// 30. Print squares of all even numbers up to a given value
//
// Write a C program to find and print the square of all 
// the even values from 1 to a specified value.
// Test Data :
// List of square of each one of the even values from 1 to a 4 :
// Expected Output:
// 2^2 = 4
// 4^2 = 16
//
// NOTES: This question is poorly worded, but looking at the sample answer,
// they're looking for the 'given value' (e.g. 4) to be derived from user input.
