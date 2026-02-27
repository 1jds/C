#include <stdio.h>

int main(void) {
  int first_user_int, second_user_int, lower, upper;
  
  printf("Input the first integer: ");
  scanf("%d", &first_user_int);
  printf("Input the second integer: ");
  scanf("%d", &second_user_int);

  if (first_user_int <= second_user_int) {
    lower = first_user_int;
    upper = second_user_int;
  } else {
    lower = second_user_int;
    upper = first_user_int;
  }

  for (int i = lower + 1; i < upper; i++) {
    if (i % 7 == 2 || i % 7 == 3) {
      printf("%d\n", i);
    }
  }  

  return 0;
}


// 40. Find integers divisible by 7 with a remainder of 2 or 3
//
// Write a C program that finds all integer numbers that divide by 7 and have a remainder of 2 or 3 
// between two given integers.
// Test Data :
// Input the first integer: 25
// Input the second integer: 45
// Expected Output:
// 30
// 31
// 37
// 38
// 44
//
// NOTES: There is a little ambiguity as to whether we should include or exclude 
// the first and second integers from the search, but the example output suggests
// that we should exclude them, so that's what I've done.
// 
// In the sample answer, they mutate the original user inputs ('x', and 'y') using a third variable
// 'temp'. 
// // Swap values if x is greater than y
    // if(x > y) {
    //     temp = y;
    //     y = x;
    //     x = temp;
    // }
//I have tried a more functional style, where we don't mutate and overwrite things as much
// as possible, but instead create new copies. Obviously, this might not be the best approach
// for something like embedded programming where memory is restricted.
