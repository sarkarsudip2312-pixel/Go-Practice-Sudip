#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess;

    srand(time(0));
    secret = rand() % 100 + 1;

    printf("Guess a number (1-100): ");

    do {
        scanf("%d", &guess);

        if (guess > secret)
            printf("Too High! Try Again: ");
        else if (guess < secret)
            printf("Too Low! Try Again: ");

    } while (guess != secret);

    printf("Congratulations! You guessed it.\n");

    return 0;
}