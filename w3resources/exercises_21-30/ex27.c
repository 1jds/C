#include <stdio.h>

int main(void) {
  int user_numbers[5];
  int no_of_positives, no_of_negatives;

  printf("Input the first number: ");
  scanf("%d", &user_numbers[0]);
  printf("Input the second number: ");
  scanf("%d", &user_numbers[1]);
  printf("Input the third number: ");
  scanf("%d", &user_numbers[2]);
  printf("Input the fourth number: ");
  scanf("%d", &user_numbers[3]);
  printf("Input the fifth number: ");
  scanf("%d", &user_numbers[4]);

  for (int i = 0; i < 5; i++) {
    if (user_numbers[i] < 0) {
      no_of_negatives++;
    } else {
      no_of_positives++;
    }
  }

  printf("Number of positive numbers: %d\n", no_of_positives);
  printf("Number of negative numbers: %d\n", no_of_negatives);
  return 0;
}


// 27. Count positive and negative numbers in 5 inputs
//
// Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers.
// Test Data :
// Input the first number: 5
// Input the second number: -4
// Input the third number: 10
// Input the fourth number: 15
// Input the fifth number: -1
// Expected Output:
// Number of positive numbers: 3
// Number of negative numbers: 2
