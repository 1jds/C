#include <stdio.h>

int hms(int seconds_remainder, int seconds_size) {
  printf("%d", seconds_remainder / seconds_size);
  if (seconds_size > 1) {
    printf(":");
  }
  return seconds_remainder - (seconds_remainder / seconds_size) * seconds_size;
}

int main(void) {
  int total_seconds;

  printf("Input seconds: ");
  scanf("%d", &total_seconds);
  
  printf("There are:\nH:M:S - ");
  hms(hms(hms(total_seconds, 3600), 60), 1);
  return 0;
}



// 17. Convert seconds into hours, minutes, seconds
//
// Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
// Test Data :
// Input seconds: 25300
// Expected Output:
// There are:
// H:M:S - 7:1:40
//
// NOTES:
// There are 3600 seconds in an hour
// There are 60 seconds in a minute
