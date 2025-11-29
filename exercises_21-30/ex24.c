#include <stdio.h>

int are_multiples(int a, int b) {
  if (a % b == 0 || b % a == 0) {
    return 1;
  }
  return 0;
}

int main(void) {
  int a, b;
  printf("Input the first number: ");
  scanf("%d", &a);
  printf("Input the second number: ");
  scanf("%d", &b);

  if (are_multiples(a, b) == 1) {
    printf("The provided numbers are multiples");
  } else {
    printf("The provided numbers are not multiples");
  }
  return 0;
}


// 24. Check if two integers are multiples
//
// Write a C program that reads two integers and checks whether they are multiplied or not.
// Test Data :
// Input the first number: 5
// Input the second number: 15
// Expected Output:
// Multiplied!

