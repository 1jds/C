#include <stdio.h>
#include <stdint.h>

int main(void) {
  
  printf("Size of C data types: \n");
  printf("Type\t\t\t Bytes \n");
  printf("-------------------------------- \n");
  printf("char\t\t\t %zu\n", sizeof(char)); 
  printf("int8_t\t\t\t %zu\n", sizeof(int8_t)); 
  printf("unsigned char\t\t %zu\n", sizeof(unsigned char)); 
  printf("uint8_t\t\t\t %zu\n", sizeof(uint8_t)); 
  printf("short\t\t\t %zu\n", sizeof(short)); 
  printf("int16_t\t\t\t %zu\n", sizeof(int16_t)); 
  printf("uint16_t\t\t %zu\n", sizeof(uint16_t)); 
  printf("int\t\t\t %zu\n", sizeof(int)); 
  printf("unsigned\t\t %zu\n", sizeof(unsigned)); 
  printf("long\t\t\t %zu\n", sizeof(long)); 
  printf("unsigned long\t\t %zu\n", sizeof(unsigned long)); 
  printf("int32_t\t\t\t %zu\n", sizeof(int32_t)); 
  printf("uint32_t\t\t %zu\n", sizeof(uint32_t)); 
  printf("long long\t\t %zu\n", sizeof(long long)); 
  printf("int64_t\t\t\t %zu\n", sizeof(int64_t)); 
  printf("unsigned long long\t %zu\n", sizeof(unsigned long long)); 
  printf("uint64_t\t\t %zu\n", sizeof(uint64_t)); 
  printf("float\t\t\t %zu\n", sizeof(float)); 
  printf("double\t\t\t %zu\n", sizeof(double)); 
  printf("long double\t\t %zu\n", sizeof(long double)); 
  printf("_Bool\t\t\t %zu\n", sizeof(_Bool)); 

  return 0;
}


/*
86. Display sizes and ranges of C's data types

Write a C program to display the sizes and ranges for each of C's data types.
Sample Output:

Size of C data types:

Type               Bytes

--------------------------------
char                 1
int8_t               1
unsigned char        1
uint8_t              1
short                2
int16_t              2
uint16t              2
int                  4
unsigned             4
long                 8
unsigned long        8
int32_t              4
uint32_t             4
long long            8
int64_t              8
unsigned long long   8
uint64_t             8
float                4
double               8
long double          16
_Bool                1
*/

