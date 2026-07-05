#include <stdio.h>
int main() {
FILE *fptr;
char buffer [255];
// 1. Open
 fptr = fopen("test.txt", "r");
// 2. Verify
 if (fptr == NULL)
 { perror("Unable to open file");
return 1; }
 // 3. Read & Print while (fgets(buffer, 255, fptr)) {
printf("%s", buffer);
} // 4. Close
fclose(fptr);
return 0;
}

