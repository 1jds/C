#include <stdio.h>

int main(void) {
  char employee_ID[11];
  float working_hours, salary_per_hour, salary_for_the_month;
  
  printf("Input the Employee's ID (Max. 10 chars): ");
  scanf("%10s", &employee_ID);
  // collect extra chars inputted into stdin
  int c;
  while ((c = getchar()) != '\n' && c != EOF);

  // Above, I made a small attempt to make my program safer by 
  // clearing any extra chars entered for the Employee ID field.
  // However, the below is still wide open for exploitation without
  // any user input validation or verification. fgets() seems to be
  // recommended over scanf().
  printf("Input the working hrs: ");
  scanf("%f", &working_hours);
  printf("Salary amount/hr: ");
  scanf("%f", &salary_per_hour);

  salary_for_the_month = working_hours * salary_per_hour;
  printf("Employee's ID = %s\n", employee_ID);
  printf("Salary = AUD $%.2f\n", salary_for_the_month);

  return 0;
}


// Write a C program that accepts an employee's ID, total worked hours in a month and
// the amount he received per hour. Print the ID and salary (with two decimal places) 
// of the employee for a particular month.
// Test Data :
// Input the Employees ID(Max. 10 chars): 0342
// Input the working hrs: 8
// Salary amount/hr: 15000
// Expected Output:
// Employees ID = 0342
// Salary = U$ 120000.00


