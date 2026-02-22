#include <stdio.h>

int main(void) {
  int user_input = 0;
  int grade_ranges_data[10] = {0};
  char buf[10];
  printf("Input test scores between 0 and 100 one-by-one followed each by Enter \n(-1 to print historgram and exit)\n");
  

  while (user_input >= 0) {
    scanf("%d", &user_input);
    if (user_input == 100) {
      grade_ranges_data[9]++;
    } else if (user_input >= 0 && user_input < 100) {
      grade_ranges_data[user_input / 10]++;
    }
  }

  for (int i = 0; i < 10; i++) {
    snprintf(buf, sizeof(buf), "%d-%d: ", i * 10, i * 10  + 10);
    printf("%8s", buf);
    for (int j = 0; j < grade_ranges_data[i]; j++) {
      printf("#");
    }
    printf("\n");
  }

  return 0;
}








/*
NOTE: I have experienced the questions in this set of C exercises being ambiguously worded,
but I haven't yet seen the sample code (granted, I have looked at only a few of the sample answers)
contain logical and syntactical errors. After I finish the first 100 of these exercises, I am going
to switch to another learning source which will hopefully be better put together.

99. Create a histogram for input integer values

Write a C program that takes some integer values from the user and prints a histogram.
Sample Output:

Input number of histogram bar (Maximum 10):
4
Input the values between 0 and 10 (separated by space):
9
7
4
3


Histogram:
#########
#######
####
###
*/
