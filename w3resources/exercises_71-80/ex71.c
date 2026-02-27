#include <stdio.h>
#include <string.h>

int main(void) {
  char user_input_str_buffer[100];
  printf("Input a string: ");
  fgets(user_input_str_buffer, sizeof user_input_str_buffer, stdin);
  // Remove newline if present
  user_input_str_buffer[strcspn(user_input_str_buffer, "\n")] = '\0'; 
  size_t original_str_len = strlen(user_input_str_buffer);
  
  char str_copy[original_str_len + 1];
  strcpy(str_copy, user_input_str_buffer);
  size_t copied_str_len = strlen(str_copy);

  printf("Original string: %s \n", user_input_str_buffer);
  printf("Copied string: %s \n", str_copy);
  printf("Number of characters = %zu \n", copied_str_len);

  return 0;
}


/*
71. Copy a string into another and count its characters

Write a C program to copy a given string into another and count the number of characters copied.
Input a string
Original string: w3resource
Number of characters = 10
*/
