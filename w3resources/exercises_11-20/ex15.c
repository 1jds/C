#include <stdio.h>
#include <math.h>

int main(void) {
  double x1, x2, y1, y2, distance;

  printf("Input x1: ");
  scanf("%lf", &x1);
  printf("Input y1: ");
  scanf("%lf", &y1);
  printf("Input x2: ");
  scanf("%lf", &x2);
  printf("Input y2: ");
  scanf("%lf", &y2);

  distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  printf("%.4lf", distance);
  return 0;
}



// 15. Calculate distance between two points
//
// Write a C program to calculate the distance between two points.
// Test Data :
// Input x1: 25
// Input y1: 15
// Input x2: 35
// Input y2: 10
// Expected Output:
// Distance between the said points: 11.1803
//
//
// NOTES:
// Pythagorean distance formula:
// d = sqrt((x2 - x1)^2 + (y2 - y1)^2)
// I used floats initially instead of doubles, 
// but sqrt() and pow() require doubles. So, I was getting 0.0000
// as an answer until I changes to doubles. Also, because I am using
// math.h, I need to run the compiler with the -lm flag at the end to
// get the math library to link
