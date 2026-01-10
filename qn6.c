#include <stdio.h>

int main() {
    int i, j;
    int n = 4;   // number of rows (z, yzy, xyzyx, wxyzyxw)

    for (i = 0; i < n; i++) {
        // Leading spaces to center the row
        for (j = 0; j < n - 1 - i; j++) {
            printf(" ");
        }

        // Left side: from ('z' - i) up to 'z'
        for (j = i; j >= 0; j--) {
            printf("%c", 'z' - j);
        }

        // Right side: from 'y' down to ('z' - i)
        for (j = 1; j <= i; j++) {
            printf("%c", 'z' - j);
        }

        printf("\n");
    }

    return 0;
}
