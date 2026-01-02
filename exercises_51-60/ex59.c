#include <stdio.h>

int main(void) {
  int user_chosen_limit;
  double sum = 1.0;

  printf("Input a number: ");
  scanf("%d", &user_chosen_limit);

  for (int i = 2; i <= user_chosen_limit; i++) {
    sum += (double)1/i;  
  }

  printf("Sum = %.2lf", sum);

  return 0;
}


// This question is poorly written... so I'm just going to interpret it how I understand it

// 59. Calculate the sum of the series 1+1/2+1/3+...+1/n
//
// Write a C program to display the sum of series 1 + 1/2 + 1/3 + ………. + 1/n.
// Input any number: 1 + 1/0
// Sum = 1/0

