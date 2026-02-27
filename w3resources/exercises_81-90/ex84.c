#include <stdio.h>

int main(void) {
  int counter = 0;
  double sum = 0;
  double current = 0;

  printf("Input each number on a separate line (888 to exit): ");
  while (true) {
    scanf("%lf", &current);
    if (current == 888) {
      break;
    }
    counter++;
    sum += current;
  }

  printf("%lf", sum / counter);

  return 0;
}


/*
NOTES: Not sure why 888 should be chosen as the exit code - doesn't that prevent
888 being entered as a legitimate value. I would have thought 0 would be a better exit code

84. Calculate the average of integers until 888 is entered

Write a C program to calculate and print the average of some integers. 
Accept all the values preceding 888.
Sample Input:12
15
24
888
Sample Output:

Input each number on a separate line (888 to exit):

The average value of the said numbers is 17.000000
*/
