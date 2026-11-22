#include <stdio.h>

int main() {

    int mood;

    printf("====== GIRLFRIEND MOOD DETECTOR ======\n\n");

    printf("Choose her mood:\n");
    printf("1. Happy\n");
    printf("2. Angry\n");
    printf("3. Silent\n");
    printf("4. Hungry\n");
    printf("5. Ignoring You\n");

    printf("\nEnter your choice: ");
    scanf("%d", &mood);

    switch(mood) {

        case 1:
            printf("\nShe is happy! Enjoy your life!");
            break;

        case 2:
            printf("\nWARNING! Run for your life!");
            break;

        case 3:
            printf("\nDanger! Something is definitely wrong!");
            break;

        case 4:
            printf("\nBuy her Pizza! Problem solved!");
            break;

        case 5:
            printf("\nCongratulations! You are now SINGLE!");
            break;

        default:
            printf("\nInvalid mood! Even AI cannot understand her!");
    }

    return 0;
}