#include <stdio.h>
#include <string.h>

int main() {
    char a[200], b[200];
    gets(a);
    gets(b);
    int cmp = strcmp(a, b);
    if (cmp == 0) printf("a == b\n");
    else if (cmp < 0) printf("a < b\n");
    else printf("a > b\n");
    return 0;
}
