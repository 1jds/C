#include <stdio.h>

int main() {
  char six[] = "######\n";
  char five[] = "#####\n";
  char two[] = "##";
  char one[] = "#\n";

  printf("%s%s%s%s%s%s%s\n", six, one, one, five, one, one, one);
  printf("    %s  %s      %s\n %s %s %s %s %s  %s      %s\n    %s", six, two, two, one, one, one, one, one, two, two, six);

  return 0;
}
