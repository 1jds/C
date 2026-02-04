#include <stdio.h>

int main(void) {
  double user_weight, user_height, BMI;

  printf("Input weight (kg): ");
  scanf("%lf", &user_weight);
  printf("Input height (m): ");
  scanf("%lf", &user_height);

  BMI = user_weight / (user_height * user_height);

  printf("BMI = %lf\n", BMI);
  
  printf("Grade: ");

  if (BMI < 18.5) {
    printf("Underweight");
  } else if (BMI >= 18.5 && BMI <= 24.9) {
    printf("Normal weight");
  } else if (BMI >=25.0 && BMI <=29.9) {
    printf("Overweight");
  } else if (BMI >= 30.0 && BMI <= 34.9) {
    printf("Obesity (Class I)");
  } else if (BMI >= 35.0 && BMI <= 39.9) {
    printf("Obesity (Class II)");
  } else {
    printf("Obesity (Class III)");
  }
 
  return 0;
}








/*
NOTES: BMI is calculated as weight divided by height squared.
Ranges are for adults

94. Calculate BMI and display the category

Write a C program to calculate body mass index and display the grade.
Sample Output:

Input the weight: 65
Input the height: 5.6
BMI = 2.072704

Grade: Under 
*/

