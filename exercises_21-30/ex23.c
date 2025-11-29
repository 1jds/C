#include <stdio.h>

int is_valid_triangle(int a, int b, int c) {
  // instead of using <stdbool.h>, we return 0 for false and 1 for true
  if (a + b > c && a + c > b && b + c > a) {
    return 1;
  }
  return 0;
}

int main(void) {
  double a, b, c;

  printf("Input the first number: ");
  scanf("%lf", &a);
  printf("Input the second number: ");
  scanf("%lf", &b);
  printf("Input the third number: ");
  scanf("%lf", &c);

  if (is_valid_triangle(a, b, c) == 1) {
    printf("Perimeter = %.1lf", a + b + c);
  } else {
    printf("Given values do not make a valid triangle.");
  }
  return 0;
}


// 23. Check for valid triangle and calculate perimeter
//
// Write a C program that reads three floating-point values and checks if it is possible to make 
// a triangle with them. Determine the perimeter of the triangle if the given values are valid.
// Test Data :
// Input the first number: 25
// Input the second number: 15
// Input the third number: 35
// Expected Output:
// Perimeter = 75.0
//
// NOTES: 
// Here we use the Triangle Inequality Theorem
// Three lengths 𝑎, 𝑏, and 𝑐 can form a triangle if 
// and only if all three of the following are true:
// 𝑎 + 𝑏 > 𝑐
// 𝑎 + 𝑐 > 𝑏
// 𝑏 + 𝑐 > 𝑎
//
