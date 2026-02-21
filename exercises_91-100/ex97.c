
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
  int characters_count = 0, words_count = 0, newlines_count = 0;
  int c;
  int is_in_word = 0;

  printf("Input a few works/tabs/newlines. Type Enter and then Ctrl+D to EOF:\n");
  while ((c = getchar()) != EOF) {
    characters_count++;
    if (!is_in_word && isalnum(c)) {
      is_in_word = 1;
      words_count++;
    } else if (is_in_word && !isalnum(c)) {
      is_in_word = 0;
    }
    if (c == '\n') newlines_count++;
  }

  printf("Number of Characters = %d\nNumber of words = %d\nNumber of lines = %d", characters_count, words_count, newlines_count);
  return 0;
}

/*
 
NOTES: So, obviously this would need to be clarified as to what counts as a character.
I'm going to assume that every character (including newlines, spaces, etc. counts)
 
97. Count characters, words, and lines in a given string

Write a C program that accepts a string and counts the number of characters, words and lines.
Sample Output:

Input a string and get number of charcters, words and lines:
The quick brown fox jumps over the lazy dog
^Z

Number of Characters = 44
Number of words = 9
Number of lines = 1
*/
