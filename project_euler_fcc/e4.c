#include <stdio.h>

struct TestCase {
  int  input;
  long long expected;
};

int is_palindrome(long long n, int digits) {
  int double_digits = digits * 2;
  long long digits_array[double_digits] = {};
  int last_array_index = double_digits - 1;

  for (int i = last_array_index; i >= 0; i--) {
    digits_array[i] = n % 10;
    n /= 10;
  }

  for (int i = 0; i < digits; i++) {
    if (digits_array[i] != digits_array[last_array_index - i]) {
      return 0;
    }
  }
  return 1;
}

int get_largest_palindrome_product(int digits) {
  long long maximum_number = 9;
  long long minimum_number = 1;
  for (int i = 1; i < digits; i++) {
    maximum_number = maximum_number * 10 + 9;
    minimum_number = minimum_number * 10;
  }
  long long curr_best_product = 0; 

  for (int left = maximum_number; left >= minimum_number; left--) {
    for (int right = left; right >= 10; right--) {
        long long product = left * right;
        if (product <= curr_best_product) break;
        if (is_palindrome(product, digits)) curr_best_product = product;
    }
  }
  return curr_best_product;
}

void run_test_cases(void) {
  printf("Running Test Cases: \n");
  struct TestCase tests[] = {
    {2, 9009},
    {3, 906609},
  };

  int count = sizeof(tests) / sizeof(tests[0]);

  for (int i = 0; i < count; i++) {
    long long result = get_largest_palindrome_product(tests[i].input);

    if (result == tests[i].expected) {
      printf("Test %d PASSED\n", i);
    } else {
      printf("Test %d FAILED: expected %lld got %lld\n",
             i,
             tests[i].expected,
             result);
    }
  }
}

int main() {
  run_test_cases();
  int n = 0;
  while (n < 2) {
    printf("\nWe will find the largest palindrome product for two numbers that are both n digits long\n");
    printf("Enter a natural number value for n ");
    scanf("%d", &n);
  }

  int result = get_largest_palindrome_product(n);
  printf("The largest prime factor of %d is %lld", n, result);

  return 0;
}
