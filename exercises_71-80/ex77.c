#include <stdio.h>

int main(void) {
  int principal_amt, number_of_days;
  double rate_of_interest, interest_amt;

  printf("Input principal amount: ");
  scanf("%d", &principal_amt);
  printf("Input rate of interest (e.g. 0.1): ");
  scanf("%lf", &rate_of_interest);
  printf("Input number of days for the loan: ");
  scanf("%d", &number_of_days);

  interest_amt = principal_amt * rate_of_interest * number_of_days / 365;
  printf("The interest amount is $%.2lf", interest_amt);

  return 0;
}


/*

NOTES: I'm mystified as to why we need to enter 0 to quit; it's not like we're
trying to break out of a loop or something...

77. Compute simple interest

Write a C program that accepts principal amount, rate of interest and days for a 
loan and calculates the simple interest for the loan, using the following formula.
interest = principal * rate * days / 365.
Sample Input:
10000
.1
365
0
Sample Output:
Input loan amount (0 to quit): Input interest rate: Input term of the loan in days:
The interest amount is $1000.00
Input loan principal_amt (0 to quit):
*/ 

