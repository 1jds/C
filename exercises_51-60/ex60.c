#include <stdio.h>

int main(void) {
  
  enum Week {Sun, Mon, Tue, Wed, Thu, Fri, Sat};
  char day_names[7][4] = {
    "Sun",    
    "Mon",
    "Tue",
    "Wed",
    "Thu",
    "Fri",
    "Sat"
  };

  for (int i = 0; i < 7; i++) {
    printf("%s = %d\n", day_names[i], i);
  }

  return 0;
}


// Again, the instructions are not that clear, so I'm just going
// to make something... And I'm not even using the enum in this 
// implementation, lol...

// 60. Enumerate and display integer values for the days of the week
//
// Write a C program to create enumerated data types for 7 days 
// and display their values in integer constants.
// Sun = 0
// Mon = 1
// Tue = 2
// Wed = 3
// Thu = 4
// Fri = 5
// Sat = 6

