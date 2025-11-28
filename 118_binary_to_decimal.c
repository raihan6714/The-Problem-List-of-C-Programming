#include <stdio.h>

int main() {
    char s[50];
    gets(s);
    int dec = 0;
    for (int i=0; s[i]; i++) {
        dec = dec * 2 + (s[i] - '0');
    }
    printf("%d\n", dec);
    return 0;
}
