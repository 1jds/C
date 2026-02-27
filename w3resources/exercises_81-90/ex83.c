#include <stdio.h>

int main(void) {
  int user_input;
  int count_of_threes;

  printf("Input a whole number: \n");
  scanf("%d", &user_input);

  int copy_of_user_input = user_input;
  while (copy_of_user_input > 0) {
    if (copy_of_user_input % 10 == 3) {
      count_of_threes++;
    }
    copy_of_user_input /= 10;
  }
  printf("The number of threes in %d is %d", user_input, count_of_threes);

  return 0;
}


/*
83. Count occurrences of the digit 3 in a number

Write a C program that reads an integer (7 digits or fewer) 
and counts the number of 3s in the given number.
Sample Input: 538453
Sample Output:

Input a number: The number of threes in the said number is 2
*/
