#include <stdio.h>

int main(void) {
  int month_number;
  char *month_names[] = {
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
  };

  printf("Input a number between 1 to 12 to get the month name: ");
  scanf("%d", &month_number);

  printf("%s", month_names[month_number - 1]);
  return 0;
}


// 25. Get month name from number (1–12)
//
// Write a C program that reads an integer between 1 and 12 
// and prints the month of the year in English.
// Test Data :
// Input a number between 1 to 12 to get the month name: 8
// Expected Output:
// August

