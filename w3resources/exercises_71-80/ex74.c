// #include <stdio.h>
//
// int main(void) {
//   char alphabet[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
//   'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
//   };
//   int counter = 1;
//
//   printf("List of integer equivalents of letters (a-z, A-Z). \n");
//   printf("================================================== \n");
//
//   for (int i = 0; i < 52; i++) {
//     printf("%d ", alphabet[i]);
//     if (counter == 6) {
//       printf("\n");
//       counter = 0;
//     }
//     counter++;
//   }
//
//   return 0;
// }

#include <stdio.h>

int main(void) {
    int count = 0;

    printf("List of integer equivalents of letters (a-z, A-Z)\n");
    printf("=================================================\n");

    for (char lowercase_letter = 'a'; lowercase_letter <= 'z'; lowercase_letter++) {
        printf("%d ", lowercase_letter);
        if (++count % 6 == 0) printf("\n");
    }

    for (char uppercase_letter = 'A'; uppercase_letter <= 'Z'; uppercase_letter++) {
        printf("%d ", uppercase_letter);
        if (++count % 6 == 0) printf("\n");
    }

    return 0;
}

/*
74. Display integer equivalents for all letters (a–z, A–Z)

Write a C program to display the integer equivalents of letters (a-z, A-Z).
Sample Output:
List of integer equivalents of letters (a-z, A-Z).
==================================================
97 98 99 100 101 102
103 104 105 106 107 108
109 110 111 112 113 114
115 116 117 118 119 120
121 122 32 65 66 67
68 69 70 71 72 73
74 75 76 77 78 79
80 81 82 83 84 85
86 87 88 89 90
*/
