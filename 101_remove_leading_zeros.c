#include <stdio.h>

int main() {
    char s[200];
    gets(s);
    int i = 0;
    while (s[i] == '0') i++;
    if (s[i] == '\0') printf("0\n");
    else printf("%s\n", s + i);
    return 0;
}
