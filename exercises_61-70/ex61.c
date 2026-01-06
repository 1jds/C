#include <stdio.h>
#include <math.h>

int main(void) {
    double x, result;

    printf("Input value of x: ");
    scanf("%lf", &x);

    if (x != 0.0) {
        result = sin(1.0 / x);
        printf("Value of sin(1/x) is %.4lf \n", result);
    } else {
        printf("Error: x cannot be zero. \n");
    }

    return 0;
}


// 61. Calculate and display sin(1/x) for a real number x
//
// Write a C program that accepts a real number x and prints out 
// the corresponding value of sin(1/x) using 4-decimal places.
// Input value of x: .6235
// Value of sin(1/x) is 0.9995

