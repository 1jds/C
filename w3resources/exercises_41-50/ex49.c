#include <stdio.h>

int main(void) {
  int nums[5];
  int user_input, current_value;

  printf("Input the first number of the array: ");
  scanf("%d", &user_input);
  current_value = user_input;

  for (int i = 0; i < 5; i++) {
    nums[i] = current_value;
    printf("n[%d] = %d \n", i, current_value);
    current_value = nums[i] * 3;
  }

  return 0;
}


// 49. Populate an array where each element is triple the previous
//
// Write a C program to read and print the elements of an array with length 5. Before printing, 
// insert the triple of the previous position, starting from the second position.
// For example, if the first number is 2, the array numbers must be 2, 6, 18, 54 and 162
// Test Data:
// Input the first number of the array: 5
// Expected Output:
// n[0] = 5
// n[1] = 15
// n[2] = 45
// n[3] = 135
// n[4] = 405

