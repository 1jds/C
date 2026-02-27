#include<stdio.h>
int main(void) {
  int x, y;
  
  printf("Input values for x:");
  scanf("%d",&x);
  printf("Input values for y:");
  scanf("%d", &y);
  
  printf("Before swapping the values of x & y: %d %d", x, y);
  x = x + y;
  y = x - y;
  x = x - y;
  
  printf("\nAfter swapping the values of x & y: %d %d", x, y);
  
  return 0;
}

// 55. Swap two numbers without a temporary variable
//
// Write a C program that swaps two numbers without using a third variable.
// Input value for x & y:
// Before swapping the value of x & y: 5 7
// After swapping the value of x & y: 7 5
//
//
//
// x = 10
// y = -5
//
//
// y = -5
// x = 10
