#include <stdio.h>

int main(void) {
  int h, m, hb;
  int first_angle, second_angle;

  printf("Input hour(h) and minute(m) (separated by a space): ");
  scanf("%d %d", &h, &m);

  hb = h * 5;

  if (m < 10) {
    printf("At %d:0%d", h, m);
  } else {
    printf("At %d:%d", h, m);
  }
  
  if (hb == m) {
    printf(" the angle is 0.0 degrees.");
    return 0;
  }
  
  if (h == 12 && m == 0) {
    printf(" the angle is 0.0 degrees.");
    return 0;
  }

  if (hb < m) {
    first_angle = (m - hb) * 6;
  } else {
    first_angle = (hb - m) * 6;
  }
  second_angle = 360 - first_angle;
  if (first_angle < second_angle) {
    printf(" the angle is %d.0 degrees.", first_angle);
  } else {
    printf(" the angle is %d.0 degrees.", second_angle);
  }

  return 0;
}

/*
NOTES: The quality of the questions is not consistently high. 
For example, this question contradicts itself by telling us that
at 3:00, the angle is 45deg, and then that it is 90deg (which it is).

The method I've devised does not measure the actual angle between the two hands
on a physical clock, but calculates as if the hour hand made discrete jumps to the next hour position,
rather than tweening between them...

91. Find the angle between the clock's hour and minute hands

Write a C program to find the angle between (12:00 to 11:59) the hour hand and the minute hand of a clock. 
The hour hand and the minute hand are always between 0 and 180 degrees.
For example, when it's 12 o'clock, the angle of the two hands
is 0 while 3:00 is 45 degrees (sic) and 6:00 is 180 degrees.
Sample Output:

Input hour(h) and minute(m) (separated by a space):
3 0
At 3:00 the angle is 90.0 degrees.
Input hour(h) and minute(m) (separated by a space):
6 15
The angle is 90.0 degrees at 6:15.
Input hour(h) and minute(m) (separated by a space):
12 0
At 12:00 the angle is 0.0 degrees.
*/

