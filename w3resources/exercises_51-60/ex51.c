#include <stdio.h>

// int main(void) {
//   int array_length = 5;
//   int array_n[array_length];
//   int reversed_array[array_length];
//   printf("Input the 5 members of the array: \n");
//   for (int i = 0; i < array_length; i++) {
//     scanf("%d", &array_n[i]);
//   }
//
//   for (int i = 0; i < array_length; i++) {
//     int current_int = array_n[array_length - (1 + i)];
//     reversed_array[i] = current_int; 
//     printf("array_n[%d] = %d \n", i, current_int);
//   }
//
//   return 0;
// }

int main(void) {
  int array_length = 5;
  int array_n[array_length];
  printf("Input the 5 members of the array: \n");
  for (int i = array_length - 1; i >= 0; i--) {
    scanf("%d", &array_n[i]);
  }
  for (int i = 0; i < array_length; i++) {
    printf("array_n[%d] = %d \n", i, array_n[i]);
  }

  return 0;
}

// Notes: The first implementation takes user input to create the array and then reverses it.
// However, since we already know that we want a reversed array, we can just insert the user
// input backwards from the start...

// 51. Reverse array elements by swapping positions
//
// Write a C program to read an array of length 5, change the first element by the last,
// the second element by the fourth and the third element remains the same.
// Print the elements of the modified array.
// Test Data:
// Input the 5 members of the array:
// 15
// 20
// 25
// 30
// 35
//
// Expected Output:
// array_n[0] = 35
// array_n[1] = 30
// array_n[2] = 25
// array_n[3] = 20
// array_n[4] = 15

