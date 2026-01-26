#include <stdio.h>

int main() {
    int i, j, s;
    for (i = 5; i >= 1; i--) {
        // Printing leading spaces
        for (s = 5; s > i; s--) {
            printf("  ");
        }
        // Logic: if column index is even/odd
        for (j = 1; j <= i; j++) {
            if (j % 2 == 0) printf("0 ");
            else printf("1 ");
        }
        printf("\n");
    }
    return 0;
}