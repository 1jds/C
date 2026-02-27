#include <stdio.h>

int main(void) {
  int user_input;

  printf("Input a number: ");
  scanf("%d", &user_input);
  printf("The reverse of the provided number = ");

  int copy_of_user_input = user_input;

  while (copy_of_user_input > 0) {
      printf("%d", copy_of_user_input % 10);
      copy_of_user_input /= 10;
  }

  return 0;
}

// Notes: It's not specified whether the 'number' is an integer, but I'm going
// to assume that it is, because the examples look like integers. I'm also not
// handling any sorts of situations where the number provided is not base 10,
// or the string buffer is not enough for a very large number, &c.

// 57. Reverse the digits of a number
//
// Write a C program to reverse and print a given number.
// Input a number:
// The original number = 234
// The reverse of the said number = 432

