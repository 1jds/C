#include <stdio.h>

int main(void) {
  int user_ints[5];
  int highest_value_so_far = 0;
  int position_of_highest_value = 1;

  printf("Input 5 integers: \n");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &user_ints[i]);
  }

  for (int i = 0; i < 5; i++) {
    if (user_ints[i] > highest_value_so_far) {
      highest_value_so_far = user_ints[i];
      position_of_highest_value = i + 1;
    }
  }

  printf("Highest value: %d\n", highest_value_so_far);
  printf("Position: %d\n", position_of_highest_value);
  return 0;
}

// 33. Find the highest value and its position from inputs
//
// Write a C program that accepts some integers from the user and 
// finds the highest value and the input position.
// Test Data :
// Input 5 integers:
// 5
// 7
// 15
// 23
// 45
// Expected Output:
// Highest value: 45
// Position: 5
