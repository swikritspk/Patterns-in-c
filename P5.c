#include <stdio.h>

int main() {
    int i, j, t;
    int rows = 5;

    for (i = 1; i <= rows; i++) {
        // print spaces
        for (t = 1; t <= rows - i; t++) {
            printf(" ");
        }

        // print stars (2*i - 1 stars per row)
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

