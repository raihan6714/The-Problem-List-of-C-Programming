#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    int seen[26] = {0};
    gets(s);

    for (int i=0; s[i]; i++) {
        if (isalpha((unsigned char)s[i])) {
            char c = tolower(s[i]);
            seen[c - 'a'] = 1;
        }
    }
    for (int i=0;i<26;i++)
        if (!seen[i]) {
            printf("Not Pangram\n");
            return 0;
        }
    printf("Pangram\n");
    return 0;
}
