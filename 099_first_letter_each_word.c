#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    gets(s);
    int start = 1;

    for (int i=0; s[i]; i++) {
        if (isspace((unsigned char)s[i]))
            start = 1;
        else if (start) {
            printf("%c ", s[i]);
            start = 0;
        }
    }
    return 0;
}
