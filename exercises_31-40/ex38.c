#include <stdio.h>

int main(void) {
  double first_input, second_input, result;

  printf("Input two numbers:");
  printf("\nx: ");
  scanf("%lf", &first_input);
  printf("y: ");
  scanf("%lf", &second_input);
  
  if (first_input == 0 || second_input == 0) {
    printf("Division is not possible\n");
    return 0;
  } 
 
  result = first_input / second_input;

  printf("%.1lf", result);
  return 0;
}



// 38. Divide two numbers or print if division isn't possible
//
// Write a program that reads two numbers and divides the first 
// number by the second number. If division is not possible 
// print "Division is not possible".
// Test Data :
// Input two numbers:
// x: 25
// y: 5
// Expected Output: 5.0
