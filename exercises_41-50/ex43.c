#include <stdio.h>

int main(void) {
  int num_of_lines, num_per_line, ceiling;
  int counter = 1;

  printf("Input number of lines: ");
  scanf("%d", &num_of_lines);
  printf("Number of characters in a line: ");
  scanf("%d", &num_per_line);

  // for (int i = 1; i <= num_of_lines; i++) {
  //   for (int j = 1; j <= num_per_line; j++) {
  //     printf("%d ", counter);
  //     counter++;
  //   }
  //   printf("\n");
  // }

  ceiling = num_of_lines * num_per_line;
  for (int i = 1; i <= ceiling; i++) {
    printf("%d ", counter);
    if (counter % num_per_line == 0) {
      printf("\n");
    }
    counter++;
  }

  return 0;
}


// 43. Print p lines of q numbers in sequence starting from 1
//
// Write a C program that reads two integers p and q, prints p 
// number of lines in a sequence of 1 to b in a line.
// Test Data :
// Input number of lines: 5
// Number of characters in a line: 6
// Expected Output:
// 1 2 3 4 5 6
// 7 8 9 10 11 12
// 13 14 15 16 17 18
// 19 20 21 22 23 24
// 25 26 27 28 29 30


// According to ChatGPT, the two implementations I have in the code
// will take the same amount of time...
//
// What dominates runtime?
// The slowest operation here is printf, not the loop logic.
// Console I/O is orders of magnitude slower than:
// loop counters
// comparisons
// modulo operations
// Because both versions call printf the same number of times, 
// their runtime will be dominated by I/O, making any loop-structure 
// difference negligible.
