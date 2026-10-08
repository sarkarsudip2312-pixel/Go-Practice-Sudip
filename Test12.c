#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@#$%^&*";
    int len = sizeof(chars) - 1;

    srand(time(NULL));

    while (1) {
        for (int i = 0; i < 80; i++) {
            printf("%c", chars[rand() % len]);
        }
        printf("\n");
    }

    return 0;
}