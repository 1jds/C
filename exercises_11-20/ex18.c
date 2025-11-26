#include <stdio.h>
#include <string.h>

int reduce(int remaining_total_days, int days_in_period, char period_name[]) {
  int count = remaining_total_days / days_in_period;
  printf("%d %s(s)\n", count, period_name);
  return remaining_total_days - count * days_in_period;
}

int main(void) {
  int total_days, years, months, days;

  printf("Input no. of days: ");
  scanf("%d", &total_days);

  reduce(reduce(reduce(total_days, 365, "Year"), 30, "Month"), 1, "Day");
  return 0;
}


// 18. Convert days to years, months, days
//
// Write a C program to convert a given integer (in days) to years, months and days, 
// assuming that all months have 30 days and all years have 365 days.
// Test Data :
// Input no. of days: 2535
// Expected Output:
// 6 Year(s)
// 11 Month(s)
// 15 Day(s)
