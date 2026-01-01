#include <stdio.h>

int main(void) {
  int nums[5];
  int user_input;

  printf("Input the 5 members of the array: \n");

  for (int i = 0; i < 5; i++) {
    scanf("%d", &user_input);
    if(user_input > 0) {
      nums[i] = user_input;
    } else {
      nums[i] = 100;
    }
  }

  printf("Array values are: \n");
  for (int i = 0; i < 5; i++) {
    printf("nums[%d] = %d \n", i, nums[i]);
  }

  return 0;
}


// 48. Replace negatives and zeros in an array with 100, then print
//
// Write a C program that reads and prints the elements of an array of length 5. 
// Before printing, replace every negative number, zero, with 100.
// Test Data:
// Input the 5 members of the array:
// 25
// 45
// 35
// 65
// 15
//
// Expected Output:
// Array values are:
// n[0] = 25
// n[1] = 45
// n[2] = 35
// n[3] = 65
// n[4] = 15

