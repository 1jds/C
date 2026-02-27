#include <stdio.h>

int main(void) {
  int primes_arr[45]; // may as well hard-code this, because it's known at compile time and unchanging...
  primes_arr[0] = 2;
  primes_arr[1] = 3;
  int curr_index = 2;  

  for (int i = 4; i < 199; i++) {
    int is_prime = 1;
    if (i % 2 == 0) {
      continue;
    } 
    for (int j = 3; j < i; j++) {
      if (i % j == 0) {
        is_prime = 0;
        break;
      }
    }
    if (is_prime == 1) {
      primes_arr[curr_index] = i;
      curr_index++;
    }
  }
  
  printf("The prime numbers between 1 and 199 are: \n");
  for (int i = 0; i < 45; i++) {
    printf("%d ", primes_arr[i]);
    if ((i + 1) % 10 == 0) {
      printf("\n");
    }
  }

  return 0;
}


// 65. Print prime numbers between 1 and 200 in rows of 20
//
// Write a C program that prints out the prime numbers between 1 and 200. 
// The output should be such that each row contains a maximum of 20 prime numbers.
// Expected output:
// The prime numbers between 1 and 199 are:
// 2 3 5 7 11 13 17 19 23 29
// 31 37 41 43 47 53 59 61 67 71
// 73 79 83 89 97 101 103 107 109 113
// 127 131 137 139 149 151 157 163 167 173
// 179 181 191 193 197

