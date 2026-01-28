#include <stdio.h>

int main(void) {
  

  printf("Decimal\t Roman\nnumber\t numeral\n-------------------\n");

  for (int i = 1; i <= 100; i++) {
    printf("%d\t I\n", i);
  }


  return 0;
}
/*
I II III IV V VI VII VIII IX X
XI XII XIII XIV XV XVI XVII XVIII XIX XX 

L
C 




/*
NOTES: The instructions talk about 1-50, but the example output goes up to 100... 

85. Print Roman numeral equivalents for numbers 1 to 50

Write a C program to print a table of all the Roman numeral 
equivalents of decimal numbers in the range 1 to 50.
Sample Output:

Decimal  Roman
number   numeral
-------------------
1        I
2        II
3        III
4        IV
.....
98        LXXXXVIII
99        LXXXXIX
100        C
*/
