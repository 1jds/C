#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Find all of the primes between 1 and 20
multiple them by themselves over and over until they go above 20
get the product of all of that
*/

struct TestCase {
  int  input;
  long long expected;
};

int is_prime(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

long long find_lowest_common_multiple(int n) {
  long long lcm = 1;
  int array_length = n + 1;
  int all_primes_to_n[array_length];
  memset(all_primes_to_n, 0, sizeof(all_primes_to_n));

  for (int i = 2; i <= n; i++) {
    if (is_prime(i)) {
      all_primes_to_n[i] = i;
    }
  }

  for (int i = 0; i < array_length; i++) {
    if (all_primes_to_n[i]) {
      int curr_product = all_primes_to_n[i];
      while (curr_product * all_primes_to_n[i] <= n) {
        curr_product = curr_product * all_primes_to_n[i];
      }
      all_primes_to_n[i] = curr_product;
    }
  }

  for (int i = 0; i < array_length; i++) {
    if (all_primes_to_n[i]) {
      lcm = lcm * (long long)all_primes_to_n[i];
    }
  }

  return lcm;
}

void run_test_cases(void) {
  printf("Running Test Cases: \n");
  struct TestCase tests[] = {
    {5, 60},
    {7, 420},
    {10, 2520},
    {13, 360360},
    {20, 232792560},
  };

  int count = sizeof(tests) / sizeof(tests[0]);

  for (int i = 0; i < count; i++) {
    long long result = find_lowest_common_multiple(tests[i].input);

    if (result == tests[i].expected) {
      printf("Test %d PASSED\n", i);
    } else {
      printf("Test %d FAILED: expected %d got %d\n",
             i,
             tests[i].expected,
             result);
    }
  }
}

int main() {
  run_test_cases();
  int n = 0;
  printf("\nWe will find the lowest common multiple of 1 through n \n");
  printf("Enter a natural number value for n: ");
  scanf("%d", &n);

  long long result = find_lowest_common_multiple(n);
  printf("The lowest common multiple of 1 through %d is %lld",  n, result);

  return 0;
}

