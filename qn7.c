#include <stdio.h>

int main() {
    int n = 4; // number of rows
    int i, j;

    for (i = 0; i < n; i++) {
        if (i == 0) {
            // Top row: 2*n - 1 stars
            for (j = 0; j < 2 * n - 1; j++) {
                printf("*");
            }
        } else {
            int leftStars = n - i;       // 3, 2, 1 for rows 2..4
            int midSpaces = 2 * i - 1;   // 1, 3, 5 for rows 2..4

            // Left block of stars
            for (j = 0; j < leftStars; j++) {
                printf("*");
            }
            // Middle spaces
            for (j = 0; j < midSpaces; j++) {
                printf(" ");
            }
            // Right block of stars
            for (j = 0; j < leftStars; j++) {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
