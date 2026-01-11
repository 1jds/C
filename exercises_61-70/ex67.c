#include <stdio.h>
#include <math.h>

int main(void) {
  double base, exponent, result;

  printf("This program calculates a value (x) raised to a power (y). \nInput the value of x: ");
  scanf("%lf", &base);
  printf("Input the exponent, y: ");
  scanf("%lf", &exponent);

  result = pow(base, exponent);

  printf("%.2lf raised to the power of %.2lf is %.2lf", base, exponent, result);

  return 0;
}


/*
NOTES: This question is so poorly worded, I had to look at the sample answer.
From the code, it seems that they are trying to work out x to the power of n.
The provided solution does not use the standard pow() function for some reason...

67. Evaluate y=xn

Write a C program to evaluate the equation y = xn when n is a non-negative integer.
Input the values of x and n: 256
x=256.000000; n=0;
x to power n=1.000000
*/
