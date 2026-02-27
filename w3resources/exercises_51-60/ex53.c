#include <stdio.h>

int main(void) {
  double principle_amount, rate_of_interest_percentage, time_in_years, result;

  printf("Input principle, Rate of interest, and Time period in years to find simple interest.\n");
  printf("E.g. p = 10000, r = 5 (\%), t = 22 (years) \n");

  printf("Input principle amount (e.g. 10000.25): ");
  scanf("%lf", &principle_amount);
  printf("Input rate of interest percentage (e.g. 0.05): ");
  scanf("%lf", &rate_of_interest_percentage);
  printf("Input period of years (e.g. 22): ");
  scanf("%lf", &time_in_years);

  printf("Simple interest = %.2lf", principle_amount * rate_of_interest_percentage * time_in_years);

  return 0;
}


// 53. Calculate simple interest (P, R, T)
//
// Write a C program that accepts the principle, rate of interest, 
// and time and calculates simple interest.
// Test Data:
// Input Data: p = 10000, r = 10% , t = 12 year
// Expected Output:
// Input principle, Rate of interest & time to find simple interest:
// Simple interest = 12000

