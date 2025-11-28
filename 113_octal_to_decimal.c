#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char s[50];
    gets(s);
    int len = strlen(s), dec = 0;

    for (int i=0;i<len;i++)
        dec = dec*8 + (s[i]-'0');

    printf("%d\n", dec);
    return 0;
}
