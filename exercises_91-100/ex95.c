#include <stdio.h>

double celsius_to_fahrenheit(double celsius_value) {
  double fahrenheit_equivalent = (celsius_value * 9/5) + 32.0;
  return fahrenheit_equivalent;
}

double fahrenheit_to_celsius(double fahrenheit_value) {
  double celsius_equivalent = (fahrenheit_value - 32.0) * 5/9;
  return celsius_equivalent;
}

int main(void) {
  printf("Celsius to Fahrenheit");
  printf("\n---------------------");
  printf("\nCelsius    Fahrenheit");
  for (int i = 0; i < 16; i++) {
    double curr_celsius_temp = (double)i * 10.0;
    printf("\n%6.1lf   ", curr_celsius_temp);
    printf("%10.1lf", celsius_to_fahrenheit(curr_celsius_temp));
  }

  printf("\n\nFahrenheit to Celsius");
  printf("\n---------------------");
  printf("\nFahrenheit    Celsius");
  for (int i = 0; i < 16; i++) {
    double curr_fahrenheit_temp = (double)i * 10.0;
    printf("\n%9.1lf   ", curr_fahrenheit_temp);
    printf("%8.1lf", fahrenheit_to_celsius(curr_fahrenheit_temp));
  }

  return 0;
}

/*
95. Print Fahrenheit-Celsius conversion tables (0–150°C)

Write a C program to print the corresponding Fahrenheit to Celsius and Celsius to Fahrenheit.
Both cases initial tempratue = 00, maximum temperature = 1500 and step 100
Sample Output:

Celsius to Fahrenheit
---------------------
Celsius   Fahrenheit
   0.0 	     32.0
  10.0 	     50.0
  20.0 	     68.0
  30.0 	     86.0
....
 120.0 	    248.0
 130.0 	    266.0
 140.0 	    284.0
 150.0 	    302.0


Fahrenheit to Celsius
---------------------
Fahrenheit  Celsius
   0.0 	    -17.8
  10.0 	    -12.2
  20.0 	     -6.7
  30.0 	     -1.1
  40.0 	      4.4
  50.0 	     10.0
 ...
 120.0 	     48.9
 130.0 	     54.4
 140.0 	     60.0
 150.0 	     65.6
*/

