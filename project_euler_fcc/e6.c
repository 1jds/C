#include <stdio.h>

struct TestCase {
  int input;
  long long result;
};

long long calculate_sum_of_squares(int n) {
  long long result = 0;
  for (int i = 1; i <= n; i++) {
    result += (long long)(i * i);
  }
  return result;
}

long long calculate_square_of_sums(int n) {
  long long sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += (long long)i;
  }
  long long result = sum * sum;
  return result;
}

int main() {
  printf("Running test cases: \n");
  struct TestCase tests[] = {
    {10, 2640},
    {20, 41230},
    {100, 25164150},
  };

  for (int i = 0; i < 3; i++) {
    long long test_result = calculate_square_of_sums(tests[i].input) - calculate_sum_of_squares(tests[i].input);
    if (test_result == tests[i].result) {
      printf("Test %d passed with result %lld \n", i + 1, test_result);
    } else {
      printf("Test %d failed with result %lld \n", i + 1, test_result);
    }
  }

  int user_input = 0; 
  printf("Enter a natural number n: ");
  scanf("%d", &user_input);
 
  long long result = calculate_square_of_sums(user_input) - calculate_sum_of_squares(user_input); 
  printf("The result is %lld", result);

  return 0;
}
