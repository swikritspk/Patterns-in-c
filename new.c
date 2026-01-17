#include <stdio.h>

int main() {
    int rows = 5, max = 2 * (rows / 2 + 1) + 1;
    for (int i = 1; i <= rows; i++) {
        int stars = i <= (rows + 1) / 2 ? 2 * i + 1 : 2 * (rows - i + 1) + 1;
        int spaces = (max - stars) / 2;
        for (int s = 0; s < spaces; s++) printf(" ");
        for (int k = 0; k < stars; k++) printf("*");
        printf("\n");
    }
    return 0;
}
