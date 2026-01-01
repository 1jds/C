#include <stdio.h>

int main(void) {
  int number_of_lines, number_of_nums;

  printf("Input number of lines: ");
  scanf("%d", &number_of_lines);

  number_of_nums = number_of_lines * 3;

  for (int i = 1; i <= number_of_nums ; i++) {
    if (i % 3 == 0) {
      printf("%d\n", i);
    } else {
      printf("%d ", i);
    }
  }

  return 0;
}


// 41. Print n lines of 3 consecutive numbers starting from 1
//
// Write a C program to print 3 numbers on a line, starting with 1 and printing n lines. 
// Accept the number of lines (n, integer) from the user.
// Test Data :
// Input number of lines: 5
// Expected Output:
// 1 2 3
// 4 5 6
// 7 8 9
// 10 11 12
// 13 14 15
//
