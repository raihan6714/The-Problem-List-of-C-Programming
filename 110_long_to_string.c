#include <stdio.h>

int main() {
    long x;
    char s[50];
    scanf("%ld", &x);
    sprintf(s, "%ld", x);
    printf("%s\n", s);
    return 0;
}
