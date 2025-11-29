#include <stdio.h>

int main(void) {
  int user_int;

  printf("Input an integer: ");
  scanf("%d", &user_int);

  if (user_int > 0 && user_int < 20) {
    printf("Range [0, 20]\n");
  } else if (user_int > 20 && user_int < 40) {
    printf("Range [20, 40]\n");
  } else if (user_int > 40 && user_int < 60) {
    printf("Range [40, 60]\n");
  } else if (user_int > 60 && user_int < 80) {
    printf("Range [60, 80]\n");
  } else {
    printf("The integer intered was not within the range 0-80\n");
  }

  return 0;
}


// 21. Check integer range or error for negative > 80
//
// Write a C program that reads an integer and checks the specified range to which it belongs.
// Print an error message if the number is negative or greater than 80.
// Test Data :
// Input an integer: 15
// Expected Output:
// Range [0, 20]

