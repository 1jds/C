#include <stdio.h>

int main() {
  int first_int, second_int, product;
  printf("Input the first integer: ");
  scanf("%d", &first_int);
  printf("Input the second integer: ");
  scanf("%d", &second_int);
  product = first_int * second_int;
  printf("Product of the above two integers = %d\n", product);
  return 0;
}



// Write a C program that accepts two integers from the user and calculates the product of the two
// Test Data :
// Input the first integer: 25
// Input the second integer: 15
// Expected Output:
// Product of the above two integers = 375
