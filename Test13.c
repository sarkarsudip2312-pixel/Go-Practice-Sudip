#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18) {
        printf("You are still a baby! 😂");
    }
    else if (age <= 25) {
        printf("Enjoy life, bro! 😎");
    }
    else {
        printf("Congratulations! You are getting old! 🤣");
    }

    return 0;
}