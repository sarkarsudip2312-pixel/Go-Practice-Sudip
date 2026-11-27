#include <stdio.h>

int main()
{
    int love;

    printf("Do you have a Girlfriend?\n");
    printf("1. Yes\n");
    printf("2. No\n");

    printf("\nEnter your choice: ");
    scanf("%d", &love);

    if (love == 1)
    {
        printf("\nCongratulations!\n");
        printf("Your salary = 0 Tk\n");
        printf("Your freedom = 0%%\n");
        printf("Your tension = 100%%\n");
    }
    else if (love == 2)
    {
        printf("\nCongratulations!\n");
        printf("Your salary = Your own money\n");
        printf("Your freedom = 100%%\n");
        printf("Your tension = Finding a girlfriend!\n");
    }
    else
    {
        printf("\nInvalid Choice!\n");
        printf("Even Computer doesn't understand your love life!");
    }

    return 0;
}