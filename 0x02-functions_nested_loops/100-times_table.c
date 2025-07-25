#include <stdio.h>

void print_times_table(int n) {
    if (n < 0 || n > 15) {
        return; // Do not print anything if n is out of range
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (j != 0) {
                printf(", ");
            }
            printf("%d", i * j);
        }
        printf("\n");
    }
}

