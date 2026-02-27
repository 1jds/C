#include <stdio.h>

int returnGreaterValue (int a, int b) {
  if (a > b) {
    return a;   
  } else {
    return b;
  }
}

int main(void) {
  int first, second, third, max;

  printf("Input the first integer: ");
  scanf("%d", &first);
  printf("Input the second integer: ");
  scanf("%d", &second);
  printf("Input the third integer: ");
  scanf("%d", &third);

  max = returnGreaterValue(returnGreaterValue(first, second), third);

  printf("Maximum value of three integers: %d", max);
  return 0;
}



// 13. Find the maximum of three integers
//
// Write a C program that accepts three integers and finds the maximum of the three.
// Test Data :
// Input the first integer: 25
// Input the second integer: 35
// Input the third integer: 15
// Expected Output:
// Maximum value of three integers: 35

