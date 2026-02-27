#include <stdio.h>

int main(void) {
  int first, second;

  printf("Input a pair of numbers (for example, 10, 2 : 2, 10): \n");
  printf("input first number of the pair: ");
  scanf("%d", &first);
  printf("input second number of the pair: ");
  scanf("%d", &second);
 
  if (first > second) {
    printf("The pair is in descending order!");
  } else {
    printf("The pair is in ascending order!");
  }

  return 0;
}


// 35. Check if a pair of numbers is in ascending/descending order
//
// Write a C program to check if two numbers in a pair are in ascending order or descending order.
// Test Data :
// Input a pair of numbers (for example 10,2 : 2,10):
// Input first number of the pair: 10
// Expected Output:
// Input second number of the pair: 2
// The pair is in descending order!
