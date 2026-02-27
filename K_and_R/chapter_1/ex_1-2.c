#include <stdio.h>

int main(void) {
  printf("Hello, world\q");

  return 0;
}

/*
Exercise 1-2. Experiment to find out what happens when print's argument string contains \c, where c is some character not listed above.

Answer!
What happens is that the program won't compile:

ex_1-2.c: In function ‘main’:
ex_1-2.c:4:26: warning: unknown escape sequence: ‘\q’
    4 |   printf("Hello, world\q");
      |  

*/

