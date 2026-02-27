#include<stdio.h>
#define MAX 10

int main() {
  int n, k, bi_nom;
  
  printf("Mx   ");
  for (n = 0; n <= MAX; n++)
    printf("%d   ", n);
  printf("\n----------------------------------------------------------\n");
  
  n = 0;
  
  do {
    k = 0, bi_nom = 1;    
    printf("%2d", n);
    
    while (k <= n) {
      if (n == 0 || k == 0)
        printf("%4d", bi_nom);
      else {
        bi_nom = bi_nom * (n - k + 1) / k;
        printf("%4d", bi_nom);
      }
      k = k + 1;
    }
    
    printf("\n");
    n = n + 1;
  } while (n <= MAX);
  
  printf("----------------------------------------------------------");
  
  return 0;
}


/*

NOTES: I basically just copied the sample answer for this one, because 
I was struggling to understand what the table was about. However, I 
changed a few things like variable a to k to be in line with more standard
binomial notation.
 
69. Generate a binomial coefficient table

Write a C program to print a binomial coefficient table.
Mx 0 1 2 3 4 5 6 7 8 9 10
----------------------------------------------------------
   0 1
   1 1 1
   2 1 2 1
   3 1 3 3 1
   4 1 4 6 4 1
   5 1 5 10 10 5 1
   6 1 6 15 20 15 6 1
   7 1 7 21 35 35 21 7 1
   8 1 8 28 56 70 56 28 8 1
   9 1 9 36 84 126 126 84 36 9 1
  10 1 10 45 120 210 252 210 120 45 10 1
----------------------------------------------------------
*/
