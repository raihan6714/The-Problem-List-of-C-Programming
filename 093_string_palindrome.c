#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    gets(s);
    int l = 0, r = strlen(s)-1, flag = 1;

    while (l < r) {
        if (s[l] != s[r]) { flag = 0; break; }
        l++; r--;
    }
    printf(flag ? "Palindrome\n" : "Not Palindrome\n");
    return 0;
}
