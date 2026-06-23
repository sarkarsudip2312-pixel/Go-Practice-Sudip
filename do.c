#include <stdio.h>

int main() {
    int numbers[100];  // Array to store up to 100 numbers
    int n, i;

    printf("How many numbers do you want to store? ");
    scanf("%d", &n);

    if (n > 100) {
        printf("Maximum 100 numbers can be stored.\n");
        return 1;
    }

    // Input numbers
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display numbers
    printf("\nStored Numbers:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}