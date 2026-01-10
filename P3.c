#include <stdio.h>

int main() {
    int i, j, t, count;
    int rows = 5;

    for (i = 1; i <= rows; i++) {
        // spaces
        for (t = 1; t <= rows - i; t++) {
            printf(" ");
        }

        // calculate how many times to print the number
        count = 2 * i - 1;

        // print numbers
        for (j = 1; j <= count; j++) {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}
