#include <stdio.h>
#include <math.h>

struct TestCase {
  long long input;
  int expected;
};

int is_prime(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int find_next_prime_number(int curr_prime) {
  int candidate = curr_prime + 1;
  while (!is_prime(candidate)) {
    candidate++;
  }
  return candidate;
}

int get_largest_prime_factor(long long n) {
  int largest_prime_factor = 2;

  while(true) {
    if (n == 1) {
      break;
    }
    if (n % largest_prime_factor == 0) {
      n /= largest_prime_factor;
    } else {
      largest_prime_factor = find_next_prime_number(largest_prime_factor);
    }
  }

  return largest_prime_factor;
}

void run_test_cases(void) {
  printf("Running Test Cases: \n");
  struct TestCase tests[] = {
    {2, 2},
    {3, 3},
    {5, 5},
    {7, 7},
    {8, 2},
    {13195, 29},
    {600851475143, 6857},
  };

  int count = sizeof(tests) / sizeof(tests[0]);

  for (int i = 0; i < count; i++) {
    int result = get_largest_prime_factor(tests[i].input);

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
  long long n = 0;
  while (n < 2) {
    printf("\nWe will find the largest prime factor of a given number\n");
    printf("Enter a natural number value for n of at least 2: ");
    scanf("%lld", &n);
  }

  int result = get_largest_prime_factor(n);
  printf("The largest prime factor of %lld is %d", n, result);

  return 0;
}

/* 
NOTES: 
Do all this, and then ChatGPT tells me I could have just done the below - LOL!:

#include <stdio.h>

int main() {
    long long n = 600851475143LL;

    for (long long i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
        }
    }

    printf("%lld\n", n);
    return 0;
}
*/
