#include <stdio.h>

int main() {

    int marks[5] = {90, 85, 30, 100, 45};

    printf("===== STUDENT RESULT =====\n\n");

    for(int i = 0; i < 5; i++) {

        printf("Student %d got %d marks\n", i+1, marks[i]);

        if(marks[i] >= 80) {
            printf("Wow! Genius student!\n");
        }
        else if(marks[i] >= 40) {
            printf("Just survived!\n");
        }
        else {
            printf("Bro, are you even studying?\n");
        }

        printf("\n");
    }

    return 0;
}
