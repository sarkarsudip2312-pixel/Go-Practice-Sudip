
#include <stdio.h>

int main() {
    FILE *fptr;
    char buffer[255];

    // 1. Open
    fptr = fopen("test.txt", "r");

    // 2. Verify
    if (fptr == NULL) {
        perror("Unable to open file");
        return 1;
    }

    // 3. Read & Print
    // Best practice: use sizeof(buffer) so you don't have to change the number twice if you resize the array.
    while (fgets(buffer, sizeof(buffer), fptr)) {
        printf("%s", buffer);
    }

    // 4. Close
    fclose(fptr);
    return 0;
}`
