#include <stdio.h>

// hmn = how_many_notes
int hmn(int monetary_amount, int denomination) {
  printf("%d Note(s) of %.2f\n", monetary_amount / denomination, (float)denomination);
  return monetary_amount - (monetary_amount / denomination) * denomination;
}

int main(void) {
  int money_amount;
  
  printf("Input the amount: ");
  scanf("%d", &money_amount);

  printf("There are:\n");
  hmn(hmn(hmn(hmn(hmn(hmn(hmn(money_amount, 100), 50), 20), 10), 5), 2), 1);
  return 0;
}




// 16. Break amount into smallest banknotes
//
// Write a C program to read an amount (integer value) and break the amount 
// into the smallest possible number of bank notes.
// Test Data :
// Input the amount: 375
// Expected Output:
// There are:
// 3 Note(s) of 100.00
// 1 Note(s) of 50.00
// 1 Note(s) of 20.00
// 0 Note(s) of 10.00
// 1 Note(s) of 5.00
// 0 Note(s) of 2.00
// 0 Note(s) of 1.00
//
// Notes: I tried to code this in a functional style. I think I achieved that insofar as
// I don't mutate the original input value of money_amount. However, the function 'hmn'
// still calls printf() which could be considered a side-effect. Also, I thought of using
// recursion instead of nested function calls. However, I couldn't see an elegant way
// to move from the arbitrary denomination amounts 
// (e.g. 100 to 50 is /2, but then 50 to 20 is -30). I suppose this reflects the fact that
// C is more of a procedural language than a functional one.
