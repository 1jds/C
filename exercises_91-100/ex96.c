#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int blanks_count = 0, tabs_count = 0, newlines_count = 0;
  int c;

  printf("Input a few works/tabs/newlines. Type Enter and then Ctrl+D to EOF:\n");
  while ((c = getchar()) != EOF) {
    if (c == '\n') newlines_count++;
    if (c == '\t') tabs_count++;
    if (c == ' ') blanks_count++;
  }

  printf("blank=%d, tab=%d, newline=%d", blanks_count, tabs_count, newlines_count);
  return 0;
}

/*
96. Count blanks, tabs, and newlines in a text input

Write a C program to count blanks, tabs, and newlines in input text.
Sample Output:

Number of blanks, tabs, and newlines:
Input few words/tab/newlines
The quick
brown fox jumps
over the lazy dog
^Z
blank=7,tab=2,newline=3
*/
