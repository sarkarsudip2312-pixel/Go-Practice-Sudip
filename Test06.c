#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("\n");
    printf("*************************\n");
    printf("*  Welcome %s!  *\n", name);
    printf("*************************\n");
    printf("      \\(^_^)/\n");
    printf("        |\n");
    printf("       / \\\n");

    return 0;
}