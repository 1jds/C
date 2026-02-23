#include <stdio.h>
#include <math.h>

int main(void) {
  double user_input = 0.0, user_input_two_decimals;
  int dollar_amount, cents_amount = 0;

  printf("Input the cash amount (with two decimal places): ");
  scanf("%lf", &user_input);
  user_input_two_decimals = round(user_input * 100) / 100.0;
  int dollar_denominations[7] = {100, 50, 20, 10, 5, 2, 1};
  int cents_denominations[4] = {50, 20, 10, 5};
  int coins_heading_set = 0;

  dollar_amount = (int)user_input_two_decimals;
  cents_amount = (int)((user_input - dollar_amount)*100); 

  printf("Notes:");
  for (int i = 0; i < 7; i++) {
    if (dollar_amount < 5 && !coins_heading_set) {
      printf("\n\nCoins:");
      coins_heading_set = 1;
    }
    if (dollar_amount >= dollar_denominations[i]) {
      printf("\n$%d: %d", dollar_denominations[i], dollar_amount / dollar_denominations[i]);
      dollar_amount -= (dollar_amount / dollar_denominations[i]) * dollar_denominations[i];
    }
  }
  for (int i = 0; i < 4; i++) {
    if (cents_amount >= cents_denominations[i]) {
      printf("\n%dc: %d", cents_denominations[i], cents_amount / cents_denominations[i]);
      cents_amount -= (cents_amount / cents_denominations[i]) * cents_denominations[i];
    }
  }

  if (cents_amount > 0) {
    printf("\nYou nutjob, there can't be cents leftover! What sort of input have you put into this program!?");
  }

  return 0;
}

/*
NOTE: I am going to use AUD for this, because user_inputng JPY would not make much sense,
since they don't use decimal amounts for money, and I'm not American...
$100
$50
$20
$10
$5
$2
$1
50c
20c
10c
5c

100. Convert a currency value into notes and coins

Write a C program to convert a currency value (floating point with two decimal places)
to the number of coins and notes.
Sample Output:

Input the currency value (floating point with two decimal places):
10357.75

Currency Notes:
100 number of Note(s): 103
50 number of Note(s): 1
5 number of Note(s): 1
2 number of Note(s): 1

Currency Coins:
.50 number of Coin(s): 1
.25 number of Coin(s): 1
*/
