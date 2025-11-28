#include <stdio.h>

int main() {
    int h;
    scanf("%d", &h);
    int minutes = h * 60;
    int seconds = h * 3600;
    printf("Minutes = %d\nSeconds = %d\n", minutes, seconds);
    return 0;
}
