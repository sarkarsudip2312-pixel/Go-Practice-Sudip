#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j;

    srand(time(NULL));

    printf("=== MATRIX RAIN ===\n\n");

    for(i = 0; i < 20; i++) {
        for(j = 0; j < 50; j++) {
            printf("%d ", rand() % 2);
        }
        printf("\n");
    }

    return 0;
}
