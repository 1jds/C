#include <stdio.h>
#include <math.h>

int calc_discriminant(double a, double b, double c) {
}

int main(void) {
  double a, b, c, root1, root2, discriminant;

  printf("Input the first number(a): ");
  scanf("%lf", &a);
  printf("Input the first number(b): ");
  scanf("%lf", &b);
  printf("Input the first number(c): ");
  scanf("%lf", &c);

  discriminant = pow(b, 2.0) - 4 * a * c;
  if (discriminant <= 0) {
    printf("Not able to find two distinct real roots.\n");
    return 0;
  }

  root1 = (-b + sqrt(discriminant)) / (2 * a);
  root2 = (-b - sqrt(discriminant)) / (2 * a);

  printf("Root1 = %.5lf\n", root1);
  printf("Root2 = %.5lf\n", root2);
  return 0;
}


// 20. Solve quadratic equation using Bhaskara's formula
//
// Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. 
// Display a message if it is not possible to find the roots.
// Test Data :
// Input the first number(a): 25
// Input the second number(b): 35
// Input the third number(c): 12
// Expected Output:
// Root1 = -0.60000
// Root2 = -0.80000









