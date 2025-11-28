#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[50];
    gets(s);
    long val = strtol(s, NULL, 10);
    printf("%ld\n", val);
    return 0;
}
