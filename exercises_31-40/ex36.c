#include <stdio.h>

int main(void) {
  int correct = 0;
  int user_input;


  while (!correct) {
    printf("Input the password: ");
    if (scanf("%d", &user_input) !=1) {
      printf("Invalid input. Please enter numbers only.\n");
      // This is a code snippet to clear input buffer
      int c;
      while ((c = getchar()) != '\n' && c != EOF);
      continue;
    }
    if (user_input == 1234) {
      correct++;
      printf("Correct password\n");
    } else {
      printf("Incorrect password\n");
    }
  }

  return 0;
}


// 36. Validate a password (1234 as correct)
//
// Write a C program to read a password until it is valid. 
// For wrong password print "Incorrect password" and for correct password print, 
// "Correct password" and quit the program. The correct password is 1234.
// Test Data :
// Input the password: 1234
// Expected Output:
// Correct password
//
// NOTES: Aparently, the only falsey values in C are 0, 0.0, NULL, or '\0'.
// I suppose that is unless we use the boolean header file...
