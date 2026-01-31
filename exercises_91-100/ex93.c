#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

bool is_nearly_prime(int n) {
    if (n < 4 || is_prime(n)) return false;

    int count = 0;
    for (int i = 2; i * i <= n && count <= 2; i++) {
        while (n % i == 0) {
            if (!is_prime(i)) return false;
            count++;
            n /= i;
        }
    }

    if (n > 1) count++;
    return count == 2;
}

// bool is_nearly_prime(int n) {
//   if (n < 4 || is_prime(n)) return false;
//
//   int number_of_prime_factors = 0;
//   while (n % 2 == 0) {
//     number_of_prime_factors++;
//     if (number_of_prime_factors > 2) return false;
//     n /= 2;
//   }
//
//   for (int i = 3; i * i <= n; i += 2) {
//     while (n % i == 0) {
//       if (is_prime(i)) {
//         number_of_prime_factors++;
//         if (number_of_prime_factors > 2) return false;
//         n /= i;
//       } else {
//         return false;
//       }
//     }
//   }
//
//   // If n is still greater than 1, it's a prime factor
//   if (n > 1) {
//     number_of_prime_factors++;
//     if (number_of_prime_factors > 2) return false;
//   }
//   return true;
// }

int main(void) {
  int user_input;

  printf("Input an integer: ");
  scanf("%d", &user_input);

  if (is_nearly_prime(user_input)) {
    puts("It is a nearly prime number.");
  } else {
    puts("It is not a nearly prime number.");
  }

  return 0;
}


/*
93. Check if a number is "nearly prime"

Write a C program to check if a given number is nearly prime number or not.
Nearly prime numbers are a positive integer which is equal to the product of two prime numbers.
Sample Output:

It is not a Nearly prime number.
*/

