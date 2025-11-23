#include <stdio.h>

int main() {
  int starting_days = 1329;
  int years, weeks, days;
  years = starting_days / 365;
  weeks = (starting_days - years * 365) / 7;
  days = starting_days - (years * 365 + weeks * 7);
  printf("Years: %d\nWeeks: %d\nDays: %d", years, weeks, days);
  return 0;
}
