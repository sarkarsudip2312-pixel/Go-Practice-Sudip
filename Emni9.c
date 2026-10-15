#include <stdio.h>

int main() {
    int brain = 100;

    while (brain > 0) {
        printf("Studying C... Brain remaining: %d%%\n", brain);
        brain -= 25;
    }

    printf("Error: Student.exe has stopped working!\n");
    printf("Reason: Too much semicolon 😂\n");

    return 0;
}
