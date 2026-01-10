#include <stdio.h>

int main() {
    int i, j;
    int n = 3;   // middle number (controls height)

    // Upper half including middle
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
