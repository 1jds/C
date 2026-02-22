#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
  int c;
  int is_in_word = 0;
 
  printf("Input some text (Enter to print words, Ctrl+D to exit):\n");

  while ((c = getchar()) != EOF) {
    if (!is_in_word && isalnum(c)) {   // Start of a word
      is_in_word = 1;
      printf("%c", c);
    } else if (is_in_word && isalnum(c)) {   // Middle or end of a word
      printf("%c", c);
    } else if (is_in_word && !isalnum(c)) {   // Whitespace after a word
      printf("\n");
      is_in_word = 0;
    }
  }

  return 0;
}

/*
NOTE: A simpler approach could be to just append all isalnum(c) and put a newline for each !isalnum(c),
but this wouldn't handle edgecases very well (e.g. to spaces in a row, leading whitespace, etc.)
My first implementation is OK. However, some testing shows that it doesn't include punctuation (because
of what isalnum() includes and excludes). Another implementation (no doubt with its own drawbacks) I will
try is to use isspace().


98. Print each word of input text on a new line

Write a C program that accepts some text from the user 
and prints each word of that text on a separate line.
Sample Output:

Input some text:
The quick brown fox jumps over the lazy dog
The
quick
brown
fox
jumps
over
the
lazy
dog
*/
