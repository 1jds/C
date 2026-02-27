#include <stdio.h>

int main(void) {
  char letters[52] = {
    'A','B','C','D','E','F','G','H','I','J','K','L','M',
    'N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
    'a','b','c','d','e','f','g','h','i','j','k','l','m',
    'n','o','p','q','r','s','t','u','v','w','x','y','z'
  };

  for (int i = 0; i < 52; i++) {
    char curr = letters[i];
    printf("[%d-%c] ", curr, curr);
  }

  return 0;
}


/*
70. Display alphabet letters with their ASCII codes

Write a C program to print the alphabet set in decimal and character form.
[65-A] [66-B] [67-C] [68-D] [69-E] [70-F] [71-G] [72-H] [73-I] [74-J] 
[75-K] [76-L] [77-M] [78-N] [79-O] [80-P] [81-Q] [82-R] [83-S] [84-T] 
[85-U] [86-V] [87-W] [88-X] [89-Y] [90-Z] [97-a] [98-b] [99-c] [100-d] 
[101-e] [102-f] [103-g] [104-h] [105-i] [106-j] [107-k] [108-l] [109-m] 
[110-n] [111-o] [112-p] [113-q] [114-r] [115-s] [116-t] [117-u] [118-v]
[119-w] [120-x] [121-y] [122-z]
*/
