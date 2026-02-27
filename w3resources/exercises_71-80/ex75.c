#include <stdio.h>

int main(void) {
  int user_input;
  int digits_array[7];

  printf("Input a seven digit number: ");
  scanf("%d", &user_input);

  int temp = user_input;
  for (int i = 6; i >= 0; i--) {
    digits_array[i] = temp % 10;
    temp /= 10; 
  }
  
  printf("Output: ");
  for (int i = 0; i < 7; i++) {
    printf("%d  ", digits_array[i]);
  }
  printf("\n");

  return 0;
}

// NOTES: This sort of works, but it is fragile. Chat Gippity, when asked how this could
// be improved, told me that string input could be used to prevent certain errors, and 
// allow for leading zeros, etc.

// 75. Separate the digits of a 7-digit number with spaces
//
// Write a C program that accepts a seven-digit number, separates the number into its 
// individual digits, and prints the digits separated from one another by two spaces each.
// Sample Input: 2345678
// Input a seven digit number:
// Output: 2 3 4 5 6 7 8

