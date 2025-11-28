#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int freq[256] = {0};
    gets(s);

    for (int i=0; s[i]; i++)
        freq[(unsigned char)s[i]]++;

    for (int i=0; s[i]; i++) {
        if (freq[(unsigned char)s[i]] == 1) {
            printf("%c\n", s[i]);
            return 0;
        }
    }
    printf("No non-repeating character\n");
    return 0;
}
