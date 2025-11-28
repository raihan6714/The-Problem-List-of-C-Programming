#include <stdio.h>

int main() {
    char s[200];
    int len = 0;
    gets(s);
    while (s[len] != '\0') len++;
    printf("Length = %d\n", len);
    return 0;
}
