#include <stdio.h>

int main(void) {
  int user_integer, polarity_int, parity_int;
  char polarity[2][9] = {
    "Negative",
    "Positive"
  };
  char parity[2][5] = {
    "Even",
    "Odd"
  };

  printf("Input an integer: ");
  scanf("%d", &user_integer);

  if (user_integer < 0) {
    polarity_int = 0; 
  } else {
    polarity_int = 1;
  }

  if (user_integer % 2 == 0) {
    parity_int = 0;
  } else {
    parity_int = 1;
  }

  printf("%s %s\n", polarity[polarity_int], parity[parity_int]);
  return 0;
}


// 31. Check if an integer is positive/negative and even/odd
//
// Write a C program to check whether a given integer is positive even, negative even, 
// positive odd or negative odd. Print even if the number is 0.
// Test Data :
// Input an integer: 13
// Expected Output:
// Positive Odd
