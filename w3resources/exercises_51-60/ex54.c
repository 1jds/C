#include <stdio.h>

int main(void) {
  double distance_in_cm, conversion_ratio = 2.54;

  printf("Input the distance in cm: ");
  scanf("%lf", &distance_in_cm);

  printf("Distance of %.2lfcms = %.2lfin \n", distance_in_cm, distance_in_cm / conversion_ratio);

  return 0;
}


// 54. Convert distance from centimeters to inches
//
// Write a C program that accepts a distance in centimeters 
// and prints the corresponding value in inches.
// Test Data:
// Input Data: 500cms
// Input the distance in cm:
// Distance of 500.00 cms is = 196.85 inches

