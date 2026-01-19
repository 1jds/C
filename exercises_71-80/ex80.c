#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int user_input = 0;
  char hash_character = '#';
  int twice_user_input = 0;

  printf("Input the size of the square (between 1 and 10): ");
  while (user_input < 1 || user_input > 10) {
    scanf("%d", &user_input);
    if (user_input < 1 || user_input > 10) {
      printf("Size provided must be between 1 and 10 (inclusive). Try again.");
    }
  }
  twice_user_input = user_input * 2;
  char *repeated_hash_str = malloc(twice_user_input + 1);

  if (repeated_hash_str == NULL) {
    perror("Memory allocation failed");
    return 1;
  }

  for (int i = 0; i < twice_user_input; i+=2) {
    repeated_hash_str[i] = ' ';
    repeated_hash_str[i + 1] = hash_character;
  }
  repeated_hash_str[twice_user_input] = '\0';

  for (int i = 0; i < user_input; i++) {
    printf("%s \n", repeated_hash_str);
  }

  free(repeated_hash_str);

  return 0;
}


/*
80. Print a filled square of size nnn using #

Write a C program that reads the side (side sizes between 1 and 10 )
of a square and prints square using hash (#) character.
Sample Input: 10
Sample Output:

Input the size of the square: 
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
*/

