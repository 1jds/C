#include <stdio.h>

int main(void) {
  int user_input;

  printf("Input a five-digit number: ");
  scanf("%d", &user_input);

  if (user_input < 10000 || user_input > 99999) {
    printf("Input must be between 10,000 and 99,999");
    return 0;
  }

  if (user_input % 10 != user_input / 10000) {
    printf("%d is not a palindrome.", user_input);
  } else if ((user_input % 100) / 10 != (user_input / 1000) % 10) {
    printf("%d is not a palindrome.", user_input);
  } else {
    printf("%d is a palindrome", user_input);
  }

  return 0;
}


/*
NOTES: There could be different ways of doing this. For a solution that allows for leading zeros,
it might be necessary to use a string input. However, we're not going to do that, since the question
specifically says to use an int, so we're going to hope for user cooperation :|

82. Check if a 5-digit integer is a palindrome

Write a C program that reads a five-digit integer and determines whether or not it's a palindrome.
Sample Input: 33333
Sample Output:

Input a five-digit number: 33333 is a palindrome.
*/

