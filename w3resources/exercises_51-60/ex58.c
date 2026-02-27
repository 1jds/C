#include <stdio.h>

int main(void) {
  double user_inputs[4], min, max;

  printf("Input four numbers: ");
  scanf("%lf%lf%lf%lf", &user_inputs[0], &user_inputs[1], &user_inputs[2], &user_inputs[3]);

  max = user_inputs[0];
  min = user_inputs[0];

  for (int i = 0; i < 4; i++) {
    if (user_inputs[i] > max) {
      max = user_inputs[i];
    } else if (user_inputs[i] < min) {
      min = user_inputs[i];
    }
  }

  printf("Difference is %.4lf", max - min);

  return 0;
}




// 58. Find the difference between max and min of 4 numbers
//
// Write a C program that accepts 4 real numbers from the keyboard and 
// prints out the difference between the maximum and minimum values of these four numbers.
// Input four numbers: 1.54 1.236 1.3625 1.002
// Difference is 0.5380

