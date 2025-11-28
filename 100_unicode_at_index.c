#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int idx;
    gets(s);
    scanf("%d", &idx);

    if (idx >= 0 && idx < (int)strlen(s))
        printf("%d\n", (unsigned char)s[idx]);
    else
        printf("Index out of range\n");

    return 0;
}
