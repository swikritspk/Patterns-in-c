#include <stdio.h>

int main() {
    int i, j, k;
    int n = 5;  // number of rows

    for (i = n; i >= 1; i--) {          // Outer loop: rows from 5 down to 1
        for (j = 0; j < n - i; j++) {   // Print leading spaces
            printf(" ");
        }
        for (k = 0; k < i; k++) {       // Print stars
            printf("*");
        }
        printf("\n");                   // Move to next line
    }

    return 0;
}
