#include <stdio.h>

struct TestCase {
  int input;
  int expected;
};

int fibo_even_sum(int n) {
  int sum = 2;
  int first = 1;
  int second = 2;
  int third = 3;

  while (third <= n) {
    if (third % 2 == 0) {
      sum += third;
    }
    first = second;
    second = third;
    third = first + second;
  }

  return sum;
}

void run_test_cases(void) {
  printf("Running Test Cases: \n");
  struct TestCase tests[] = {
    {8, 10},
    {10, 10},
    {34, 44},
    {60, 44},
    {1000, 798},
    {100000, 60696},
    {4000000, 4613732},
  };

  int count = sizeof(tests) / sizeof(tests[0]);

  for (int i = 0; i < count; i++) {
    int result = fibo_even_sum(tests[i].input);

    if (result == tests[i].expected && result % 2 == 0) {
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
  while (n < 2) {
    printf("\nWe will find the sum of all even numbers in the fibonacci sequence up to and including n. \n");
    printf("Enter a natural number value for n of at least 2: ");
    scanf("%d", &n);
  }

  if (n < 8) {
    printf("You entered %d, for which the sum is %d.\n", n, 2);
  } else {
    printf("You entered %d, for which the sum is %d.\n", n, fibo_even_sum(n));
  }

  return 0;
}
