#include <stdio.h>

int isPrime(int n) {
  if (n <= 1) return 0;
  if (n == 2) return 1;
  if (n % 2 == 0) return 0;

  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int main(void) {
  int n = 0, count = 0, curr = 1, place_value = 3;
  char place_value_suffixes[4][3] = {"st", "nd", "rd", "th"};

  while (n < 1) {
    printf("Enter a positive integer 2 or greater: ");
    scanf("%d", &n);
  }

  if (n % 10 == 1) {
    place_value = 0;
  } else if (n % 10 == 2) {
    place_value = 1;
  } else if (n % 10 == 3) {
    place_value = 2;
  }

  while (true) {
    if (isPrime(curr)) {
      count++;
    }
    if (count >= n) {
      printf("The %d%s prime is %d", n, place_value_suffixes[place_value], curr);
      break;
    }
    curr++;
  }

  return 0;
}
