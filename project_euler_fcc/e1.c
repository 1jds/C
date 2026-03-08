#include <stdio.h>

struct TestCase {
  int input;
  int expected;
};

int multiples_of_3_or_5(int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  return sum;
}

void run_test_cases(void) {
  printf("Running Test Cases: \n");
  struct TestCase tests[] = {
    {10, 23},
    {49, 543},
    {1000, 233168},
    {8456, 16687353},
    {19564, 89301183},
  };

  int count = sizeof(tests) / sizeof(tests[0]);

  for (int i = 0; i < count; i++) {
    int result = multiples_of_3_or_5(tests[i].input);

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
  while (n <= 4) {
    printf("\nWe will find the sum of all multiples of 3 or 5 below n. \n");
    printf("Enter a natural number value for n of at least 4: ");
    scanf("%d", &n);
  }

  printf("You entered %d, for which the sum is %d.\n", n, multiples_of_3_or_5(n));

  return 0;
}

