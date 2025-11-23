#include <stdio.h>

int main() {
  int height = 7;
  int width = 5;

  int perimeter, area;
  perimeter = (height + width) * 2;
  area = height * width;

  printf("Perimeter of the rectangle = %d inches\n", perimeter);
  printf("Area of the rectangle = %d square inches\n", area);
  return 0;
}
// If you forget to pass the argument (in this case 'area') 
// to printf - as I did - you will still get a value printed 
// out, but it will be something random from the stack.
// Yikes; no error!


