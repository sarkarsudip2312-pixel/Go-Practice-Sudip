#include <stdio.h>
#include <unistd.h> // Linux/Mac

int main() {
    char text[] = "ACCESSING NASA DATABASE...\nACCESS GRANTED!\nWELCOME AGENT 007.\n";

    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c", text[i]);
        fflush(stdout);
        usleep(100000); // 0.1 second delay
    }

    return 0;
}