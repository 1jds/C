#include <stdio.h>

int main(void) {
  char hash_char = '#';
  int user_input = 0;

  printf("Input the size of the square: ");
  while (user_input < 1 || user_input > 10) {
    scanf("%d", &user_input);
    if (user_input < 1 || user_input > 10) {
      printf("Input should be between 1 and 10. Try again.");
    }
  }
  
  for (int i = 1; i <= user_input; i++) {
    if (i == 1 || i == user_input) {
      for (int j = 0; j < user_input; j++) {
        printf("#");
      }
    } else {
      printf("%c", hash_char);
      for (int j = 2; j < user_input; j++) {
        printf(" ");
      }
      printf("%c", hash_char);
    }
    printf("\n");
  }

  return 0;
}


/*
81. Print a hollow square of size nnn using #

Write a C program that reads the side (side sizes between 1 and 10 ) of a 
square and prints a hollow square using the hash (#) character.
Sample Input: 10
Sample Output:

Input the size of the square: 
##########
#        #
#        #
#        #
#        #
#        #
#        #
#        #
#        #
##########
*/
