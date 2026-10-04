#include <stdio.h>

int main() {
    int choice;

    printf("=== Magic Fortune Teller ===\n");
    printf("Pick a number (1-5): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("You will write a bug-free program today!\n");
            break;
        case 2:
            printf("A semicolon will save your project.\n");
            break;
        case 3:
            printf("Your next code will compile on the first try.\n");
            break;
        case 4:
            printf("You will discover a new programming trick.\n");
            break;
        case 5:
            printf("Coffee and coding will bring success.\n");
            break;
        default:
            printf("The future is unclear... Try 1-5.\n");
    }

    return 0;
}