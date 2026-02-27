#include <stdio.h>

int quadrant_index(int x, int y) {
  if (x >= 0 && y >= 0) {
    return 0;
  } else if (x < 0 && y >= 0) {
    return 1;
  } else if (x < 0 && y < 0) {
    return 2;
  } else {
    return 3;
  }
}

int main(void) {
  int x, y;
  char quadrants[4][10] = {
    "I (+,+)",
    "II (-,+)",
    "III (-,-)",
    "IV (+,-)"
  };
  printf("Input the Coordinate(x,y):\n");
  printf("x: ");
  if (scanf("%d", &x) != 1) {
    printf("Invalid input. Please enter numbers only.\n");
    return 0;
  }
  printf("y: ");
  if (scanf("%d", &y) != 1) {
    printf("Invalid input. Please enter numbers only.\n");
    return 0;
  }

  int i = quadrant_index(x, y);

  printf("Quadrant - %s\n", quadrants[i]);
  return 0;
}



// 37. Determine quadrant of Cartesian coordinates (x, y)
//
// Write a C program to read the coordinates (x, y) (in the Cartesian system) and find 
// the quadrant to which it belongs (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV).
// Note: A Cartesian coordinate system is a coordinate system that specifies each point 
// uniquely in a plane by a pair of numerical coordinates.
// These are often numbered from 1st to 4th and denoted by Roman numerals: 
// I (where the signs of the (x,y) coordinates are I(+,+), II (−,+), III (−,−), and IV (+,−).
// Test Data :
// Input the Coordinate(x,y):
// x: 25
// y: 15
// Expected Output:
// Quadrant-I(+,+)
