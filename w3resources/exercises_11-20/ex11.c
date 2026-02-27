#include <stdio.h>

int main(void) {
  double item_1_weight, item_2_weight, item_1_number, item_2_number, total_weight, total_number_of_items, average_weight;
  
  printf("Weight - Item1: ");
  scanf("%lf", &item_1_weight);
  printf("No. of item1: ");
  scanf("%lf", &item_1_number);
  printf("Weight - Item2: ");
  scanf("%lf", &item_2_weight);
  printf("No. of item2: ");
  scanf("%lf", &item_2_number);

  total_weight = item_1_weight * item_1_number + item_2_weight * item_2_number;
  total_number_of_items = item_1_number + item_2_number;
  average_weight = total_weight / total_number_of_items;
  printf("Average Value = %f\n", average_weight);
  
  return 0;
}




// 11. Calculate average weight for purchases
//
// Write a C program that accepts two item's weight and number of purchases
// (floating point values) and calculates their average value.
// Test Data :
// Weight - Item1: 15
// No. of item1: 5
// Weight - Item2: 25
// No. of item2: 4
// Expected Output:
// Average Value = 19.444444
