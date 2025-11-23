#include <stdio.h>

int main() {
  #ifdef __STDC_VERSION__
    if (__STDC_VERSION__ >= 201710L) {
    printf("We are using C18!\n");
    } else {
    printf("We are not using C18! :(\n");
    }
  #else
    printf("__STDC_VERSION__ appears to be undefined.\n");
  #endif
  return 0;
}





