#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(NULL));
    secret = rand() % 100 + 1;

    printf("=== Guess The Number Game ===\n");
    printf("I have chosen a number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secret) {
            printf("Too High!\n");
        } else if (guess < secret) {
            printf("Too Low!\n");
        } else {
            printf("\nCongratulations! You guessed it.\n");
            printf("Attempts: %d\n", attempts);
        }

    } while (guess != secret);

    return 0;
}