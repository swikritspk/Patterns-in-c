#include <stdio.h>

int main() {
    int n = 5; // height of diamond (odd number)
    int i, j;

    // Upper half
    for (i = 1; i <= n; i += 2) {
        for (j = 0; j < (n - i) / 2; j++)
            printf(" ");
        for (j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }

    // Lower half
    for (i = n - 2; i > 0; i -= 2) {
        for (j = 0; j < (n - i) / 2; j++)
            printf(" ");
        for (j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
