#include <stdio.h>

int main(void) {
  int smallest_int, position_of_smallest = 0, array_length;
  printf("Input the length of the array: ");
  scanf("%d", &array_length);

  int array_to_search[array_length];
  
  printf("Input the array elements: \n");
  for (int i = 0; i < array_length; i++) {
    scanf("%d", &array_to_search[i]);
  }

  smallest_int = array_to_search[0];
  for (int i = 0; i < array_length; i++) {
    if (array_to_search[i] < smallest_int) {
      smallest_int = array_to_search[i];
      position_of_smallest = i;
    }
  }

  printf("Smallest Value: %d \n", smallest_int);
  printf("Position of the element: %d", position_of_smallest);

  return 0;
}


// Notes: This question doesn't really specify whether negative numbers need to be
// taken into consideration. I'm assuming that they do.

// 52. Find the smallest element in an array and its position
//
// Write a C program to read an array of length 6 and find the smallest element and its position.
// Test Data:
// Input the length of the array: 5 Input the array elements:
// 25
// 35
// 20
// 14
// 45
// Expected Output:
// Smallest Value: 14
// Position of the element: 3

