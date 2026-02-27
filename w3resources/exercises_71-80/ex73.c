#include <stdio.h>

int main(void) {
  int user_input_first, user_input_second;

  printf("Input the first integer: ");
  scanf("%d", &user_input_first);
  printf("Input the first integer: ");
  scanf("%d", &user_input_second);

  if (user_input_first % user_input_second == 0) {
    printf("%d is a multiple of %d", user_input_first, user_input_second);
  } else {
    printf("%d is not a multiple of %d", user_input_first, user_input_second);
  }

  return 0;
}


/*
73. Check if the first integer is a multiple of the second

Write a C program that reads two integers and checks whether 
the first integer is a multiple of the second integer.
Sample Input: 9 3
Sample Output:
Input the first integer : 
Input the second integer:
9 is a multiple of 3.
*/

