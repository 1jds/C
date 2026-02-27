#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int32_t x, y, z;
    int64_t sum;

    scanf("%d %d %d", &x, &y, &z);

    sum = (int64_t)x + y + z;

    printf("Result: %lld\n", sum);

    return 0;
}


/*
NOTES: It's clear that this exercise is supposed to teach something about 32 bit ints, but the question wording
is unclear (what is the "pair of integers" in x, y, z?). So, looking at the sample solution for this one.
O....k, the sample solution uses long long x, y, z... and scanf("%lld"); but does that guarantee that the 
user-provided values of x, y, z, are within the range -2^31 to 2^31 - 1????

I got an answer from ChatGPT that is probably better than the sample answer.

What's with the sample result sum???
The max value is 3 × 2147483647 (i.e. 2^31 - 1) = 6442450941

89. Compute (x+y+z) for integers in valid range

Write a C programming to calculate (x + y + z) for each pair of integers x, y and z where -2^31 <= x, y, z<= 2^31-1.
Sample Output:

Result: 140733606875472
*/

