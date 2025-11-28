#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    gets(s);
    int l=0, r=strlen(s)-1;
    while (l<r) {
        char t = s[l]; s[l]=s[r]; s[r]=t;
        l++; r--;
    }
    printf("%s\n", s);
    return 0;
}
