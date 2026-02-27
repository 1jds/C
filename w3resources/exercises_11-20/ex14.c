#include <stdio.h>

int main(void) {
  int total_distance;
  float fuel_spent, average_consumption;

  printf("Input total distance in km: ");
  scanf("%d", &total_distance);
  printf("Input total fuel spent in liters: ");
  scanf("%f", &fuel_spent);

  average_consumption = total_distance / fuel_spent;

  printf("Average consumption (km/lt) %.2f", average_consumption);
  return 0;
}



// Not sure what is meant in the instructions by using a float 
// of 2 decimal points when the example output has three decimal points
// I think this must've been a typo in the instructions.



// 14. Calculate bike’s average consumption
//
// Write a C program to calculate a bike’s average consumption from the given
// total distance (integer value) travelled (in km) and spent fuel
// (in litters, float number – 2 decimal points).
// Test Data :
// Input total distance in km: 350
// Input total fuel spent in liters: 5
// Expected Output:
// Average consumption (km/lt) 70.000
