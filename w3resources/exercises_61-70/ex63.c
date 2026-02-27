#include <stdio.h>

int main(void) {
  int user_input = 0, sum = 0, j = 1;

  while (user_input <= 0 || user_input > 100) {
    printf("Input a positive number less than 100: ");
    scanf("%d", &user_input);
  }

  for (int i = 1; j <= user_input; i++) {
    sum += j * j * j * j; 
    j += i;
  }

  printf("Sum of the series is %d \n", sum);

  return 0;
}


// So... the instructions for this one are completely incomprehensible 
// (why is 2^4 skipped? what does 14 + 24 ... relate to?) No idea what this is
// Looking at the sample answer, we move by intervals. On the one hand, we just count
// up by 1 (e.g. 1, 2, 3, 4, 5, 6, 7, etc.)
// On the other hand, we start at 1, and sum 1 + 1 in the first iteration, and then use 
// the result of that when summing with 2 next. E.g.
// 1 + 1, 2 + 2, 3 + 4, 4 + 7, 5 + 11, 6 + 16, etc.


// 63. Sum the series 1^4 + 2^4 + 4^4 + ... + m^4
//
// Write a C program that accepts a positive integer n less than 100 from the user. 
// It prints out the sum of 14 + 24 + 44 + 74 + 114 + • • • + m4. 
// In this case, m is less than or equal to n. Print an appropriate message.
// Input a positive number less than 100: 68
// Sum of the series is 37361622

