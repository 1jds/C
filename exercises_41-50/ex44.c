#include <stdio.h>

int main(void) {
  int user_input, total, num_of_inputs;  

  printf("Input Mathematics marks (0 to terminate): ");
  scanf("%d", &user_input);

  total = 0;
  num_of_inputs = 0;

  while (user_input >= 0) {
    if (user_input == 0) {
      printf("Average marks in Mathematics: %.2lf \n", (double)total / num_of_inputs);
      return 0;
    }
    if (user_input > 0) {
      total += user_input;
      num_of_inputs++;
    }
    scanf("%d", &user_input);
  }

  return 0;
}


// 44. Calculate the average of student math marks until termination
//
// Write a C program to calculate the average mathematics marks of some students. 
// Input 0 (excluding to calculate the average) or a negative value to terminate the input process.
// Test Data :
// Input Mathematics marks (0 to terminate): 10
// 15
// 20
// 25
// 0
// Expected Output:
// Average marks in Mathematics: 17.50

