#include <stdio.h>

int main(void) {
  int user_numbers[5];
  int count_of_positives;
  int sum_of_positives;
  double average_of_positives;

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
  
  for(int i = 0; i < 5; i++) {
    if (user_numbers[i] > 0) {
      count_of_positives++;
      sum_of_positives += user_numbers[i];
    }
  }

  average_of_positives = (double)sum_of_positives / count_of_positives;

  printf("Number of positive numbers: %d\n", count_of_positives);
  printf("Average value of the said positive numbers: %.2lf", average_of_positives);
  return 0;
}


// 28. count positives and calculate their average from 5 inputs
//
// write a c program that reads 5 numbers, counts the number of positive numbers, 
// and prints out the average of all positive values.
// test data :
// input the first number: 5
// input the second number: 8
// input the third number: 10
// input the fourth number: -5
// input the fifth number: 25
// expected output:
// number of positive numbers: 4
// average value of the said positive numbers: 12.00
