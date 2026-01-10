#include <stdio.h>

int main() {
    int i, j;
    int n = 5;  // number of rows

    for (i = 1; i <= n; i++) {          // Outer loop for rows
        for (j = 1; j <= i; j++) {      // Inner loop prints stars
            printf("*");
        }
        printf("\n");                   // Move to next line
    }

    return 0;
}
