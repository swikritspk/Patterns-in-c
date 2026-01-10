#include <stdio.h>

int main() {
    int i, j;
    for (i = 5; i >= 1; i--) {          // Outer loop controls rows
        for (j = 5; j >= i; j--) {      // Inner loop prints decreasing numbers
            printf("%d", j);
        }
        printf("\n");                   // Move to next line after each row
    }
    return 0;
}
