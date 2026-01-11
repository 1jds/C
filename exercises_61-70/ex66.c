#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  FILE *fptr;
  
  fptr = fopen("rand.dat", "w");
  if (fptr == NULL) {
    printf("Error: Unable to open the file. \n");
    return 1;
  }

  fprintf(fptr, "Number of random numbers to generate: 50 \n");
  srand(time(NULL));
  for (int i = 0; i < 50; i++) {
    double new_random_num = ((double)rand() / RAND_MAX) - 0.5;
    fprintf(fptr, "Random number %d: %.4lf \n", i + 1, new_random_num);
  }

  fclose(fptr);

  return 0;
}


// 66. Generate 50 random numbers in [-0.5, 0.5] and save them to a file
//
// Write a C program that generates 50 random numbers between -0.5 and 0.5 and 
// writes them to the file rand.dat. The first line of rand.dat contains the number 
// of random numbers, while the next 50 lines contain 50 random numbers.
// 50
// -0.4215
// 0.2620
// 0.3065
// -0.0485
// .... 0.3980
// 0.1750
// 0.4780
// -0.2915
// 0.0715
// 0.3565

