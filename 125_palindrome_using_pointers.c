#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    gets(s);
    char *l = s;
    char *r = s + strlen(s) - 1;
    int flag = 1;

    while (l < r) {
        if (*l != *r) { flag = 0; break; }
        l++; r--;
    }
    printf(flag ? "Palindrome\n" : "Not Palindrome\n");
    return 0;
}
