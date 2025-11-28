#include <stdio.h>
#include <ctype.h>

int main() {
    char s[50];
    gets(s);
    int dec = 0, val;

    for (int i=0; s[i]; i++) {
        char c = toupper((unsigned char)s[i]);
        if (c >= '0' && c <= '9') val = c - '0';
        else if (c >= 'A' && c <= 'F') val = c - 'A' + 10;
        else { printf("Invalid\n"); return 0; }
        dec = dec * 16 + val;
    }

    printf("%d\n", dec);
    return 0;
}
