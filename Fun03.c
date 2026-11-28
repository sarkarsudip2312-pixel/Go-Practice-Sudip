#include <stdio.h>
#include <stdbool.h>

int main() {
    bool iLoveYou = true;
    bool youLoveMe = false;

    int memories = 100;
    int happiness = 0;

    while (iLoveYou) {
        if (youLoveMe) {
            happiness++;
        } else {
            printf("I miss you...\n");
            memories--;

            if (memories == 0) {
                printf("Some things are never meant to be.\n");
                break;
            }
        }
    }

    printf("Heart: Broken\n");
    printf("Memories: Faded\n");
    printf("Love: Unreturned\n");

    return 0; // Life goes on, even when love doesn't.
}