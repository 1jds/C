#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <float.h>

int main(void) {
  printf("Ranges for integer data types in C \n\n");
  printf("------------------------------------------------------------\n");
  printf("%-8s %20" PRId8  " %20" PRId8  "\n", "int8_t",   INT8_MIN,  INT8_MAX);
  printf("%-8s %20" PRId16 " %20" PRId16 "\n", "int16_t",  INT16_MIN, INT16_MAX);
  printf("%-8s %20" PRId32 " %20" PRId32 "\n", "int32_t",  INT32_MIN, INT32_MAX);
  printf("%-8s %20" PRId64 " %20" PRId64 "\n", "int64_t",  INT64_MIN, INT64_MAX);
  printf("%-8s %20" PRIu8  " %20" PRIu8  "\n", "uint8_t",  0, UINT8_MAX);
  printf("%-8s %20" PRIu16 " %20" PRIu16 "\n", "uint16_t", 0, UINT16_MAX);
  printf("%-8s %20" PRIu32 " %20" PRIu32 "\n", "uint32_t", 0, UINT32_MAX);
  printf("%-8s %20" PRIu64 " %20" PRIu64 "\n", "uint64_t", 0, UINT64_MAX);

  printf("\n============================================================\n\n");
  printf("Ranges for real number data types in C\n\n");
  printf("------------------------------------------------------------\n");
  printf("%-12s %14e %15e\n", "float",       FLT_MIN,  FLT_MAX);
  printf("%-12s %14e %15e\n", "double",      DBL_MIN,  DBL_MAX);
  printf("%-12s %14Le %15Le\n", "long double",LDBL_MIN, LDBL_MAX);

  return 0;
}


/*
87. Print the min and max values for all C data types

Write a C program to display the minimum and maximum values for each of C's data types.
Sample Output:

Ranges for integer data types in C

------------------------------------------------------------
int8_t                    -128                   127
int16_t                 -32768                 32767
int32_t            -2147483648            2147483647
int64_t   -9223372036854775808   9223372036854775807
uint8_t                      0                   255
uint16_t                     0                 65535
uint32_t                     0            4294967295
uint64_t                     0  18446744073709551615

============================================================

Ranges for real number data types in C

------------------------------------------------------------
float          1.175494e-38    3.402823e+38
double        2.225074e-308   1.797693e+308
long double  3.362103e-4932  1.189731e+4932
*/

