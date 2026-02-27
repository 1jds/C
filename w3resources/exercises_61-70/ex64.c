#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int min = 0, max = 0, total = 0;
  double avg = 0.0;
  int arr_capacity = 10;   // initial capacity for our soon to be dynamic array
  int arr_size = 0;        // number of elements stored at any given time
  int *arr = malloc(arr_capacity * sizeof(int));

  if (arr == NULL) {
    perror("malloc failed");
    return 1;
  }

  while (1) {
    int user_input = 0;
    printf("Input next positive integer: ");
    if (scanf("%d", &user_input) != 1) {
      break;  // input error or EOF (end-of-file/input)
    }

    if (user_input <= 0) {
      break;  // guard value/stop condition
    }

    if (arr_size == arr_capacity) {
      arr_capacity *= 2;
      int *temp = realloc(arr, arr_capacity * sizeof(int));
      if (temp == NULL) {
        free(arr);
        perror("realloc failed");
        return 1;
      }
      arr = temp;
      temp = NULL;
    }
    arr[arr_size++] = user_input;
  }

  /* Work out min, max, and total; then average */
  for (int i = 0; i < arr_size; i++) {
    int curr = arr[i];
    if (curr > max) {
      max = curr;
    }
    if (min == 0) {
      min = curr;
    }
    if (curr < min) {
      min = curr;
    }
    total += curr;
  }

  avg = (double)total / arr_size;

  printf("Number of positive values entered is %d \n", arr_size);
  printf("Maximum value entered is %d \n", max);
  printf("Minimum value entered is %d \n", min);
  printf("Average value is %.4lf \n", avg);

  free(arr);
  arr = NULL;
  return 0;
}


// 64. Count positive integers and display their min, max, and average
//
// Write a C program that accepts integers from the user until a zero or a negative number, 
// displays the number of positive values, the minimum value, the maximum value, and the average value.
// Input a positive integer:
// Input next positive integer: 15
// Input next positive integer: 25
// Input next positive integer: 37
// Input next positive integer: 43
// Number of positive values entered is 4
// Maximum value entered is 43
// Minimum value entered is 15
// Average value is 30.0000

