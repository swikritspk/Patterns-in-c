#include <stdio.h>

int main() {
    int n = 5; // size of the pattern
    int i, j;

    // Top half
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half
    for (i = 2; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
