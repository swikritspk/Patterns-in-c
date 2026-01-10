#include <stdio.h>

int main() {
    int i, j, t;
    int rows = 5;

    for (i = 1; i <= rows; i++) {
        // print spaces
        for (t = 1; t <= rows - i; t++) {
            printf("  "); // two spaces for alignment
        }

        // ascending numbers from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // again ascending from 1 to i-1
        for (j = 1; j < i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
