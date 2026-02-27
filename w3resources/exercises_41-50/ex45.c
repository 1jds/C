#include <stdio.h>

int main(void) {
  double sum;
  
  for (int i = 1; i <= 50; i++) {
    sum += (double)1 / i;
  }

  printf("Value of S: %.2lf", sum);
  return 0;
}

// #include <stdio.h>
//
// int main(void) {
//   printf("4.50");
//   return 0;
// }


// 45. Compute series sum S=1+1/2+1/3+...+1/50
//
// Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50.
// Expected Output:
// Value of S: 4.50

// Note: Just had to write a cheeky answer for this, since the answer can be
// computed ahead of time, so why calculate it?
