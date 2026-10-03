#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

int main() {
    printf("BOMB ACTIVATED!\n");

    for (int i = 10; i >= 0; i--) {
        printf("%d\n", i);

#ifdef _WIN32
        Sleep(1000);
#else
        sleep(1);
#endif
    }

    printf("💥 BOOM!!!\n");

    return 0;
}
