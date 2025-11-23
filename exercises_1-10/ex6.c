#include <stdio.h>
#include <math.h>

int main() {
  double radius, perimeter, area;
  radius = 10.0;

  perimeter = 2 * M_PI * radius;
  area = M_PI * radius * radius;

  printf("Perimeter of the circle = %f inches\n", perimeter);
  printf("Area of the circle = %f square inches\n", area);
  return 0;
}

// circumference/perimeter = C = 2πr 
// area = A = πr²



