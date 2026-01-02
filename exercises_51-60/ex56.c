#include <stdio.h>

int main() {
  int user_input;

  printf("Input an integer to be left shifted by two bits: ");
  scanf("%d", &user_input);
  
  printf("%d", user_input << 2);
  return 0;
}


// 56. Left-shift an integer by two bits
//
// Write a C program to shift given data by two bits to the left.
// Input value : 2
// Read the integer from keyboard-
// Integer value = 2
// The left shifted data is = 8

