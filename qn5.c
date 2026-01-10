//#include <stdio.h>
//
//int main() {
//    int i, j;
//    int n = 3;   // highest letter count (here up to 'C')
//
//    // Upper half including middle
//    for (i = 1; i <= n; i++) {
//        for (j = 0; j < i; j++) {
//            printf("%c", 'A' + j);   // print letters starting from 'A'
//        }
//        printf("\n");
//    }
//
//    // Lower half
//    for (i = n - 1; i >= 1; i--) {
//        for (j = 0; j < i; j++) {
//            printf("%c", 'A' + j);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

#include <stdio.h>

int main() {
    int i, j;
    int n = 3;   // highest letter count (up to 'C')

    // Upper half including middle
    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", 65 + j);   // 65 = 'A', then 66 = 'B', etc.
        }
        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) {
        for (j = 0; j < i; j++) {
            printf("%c", 65 + j);
        }
        printf("\n");
    }

    return 0;
}
