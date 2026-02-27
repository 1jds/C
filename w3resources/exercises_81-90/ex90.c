#include <stdio.h>

int isPrime(int n) {
  if (n < 2) return 0;
  if (n == 2 || n == 3) return 1;
  if (n % 2 == 0) return 0;

  for (int i = 3; i <= n / i; i += 2) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int isPalindrome(int num) {
  if (num < 0) {
    return 0;
  }

  int original = num;
  int reversed = 0;

  while (num > 0) {
    int digit = num % 10;
    reversed = reversed * 10 + digit;
    num = num / 10;
  }

  if (original == reversed) {
    return 1;
  }
  return 0;
}

int main() {
  int start, end;
  printf("Enter two numbers (separated by a space): ");
  scanf("%d %d", &start, &end);

  if (start > end) {
    int temp = start;
    start = end;
    end = temp;
  }
  
  if (start < 5 || end > 1000000000) {
    printf("Bounds entered must be between 5 and 1,000,000,000.");
    return 0;
  }

  printf("Prime number palindromes between %d and %d:\n", start, end);
  for (int i = start; i <= end; i++) {
    if (isPrime(i) && isPalindrome(i)) {
      printf("%d \n", i);
    }
  }

  return 0;
}

/*
90. List all prime palindromes between two given numbers

Write a C program to find all prime palindromes in the range of two given 
numbers x and y (5 <= x<y<= 1000,000,000).
A number is called a prime palindrome if the number is both a prime 
number and a palindrome.

Sample Output:

Input two numbers (separated by a space):
List of prime palindromes:
0
1
*/

