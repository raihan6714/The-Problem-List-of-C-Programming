#include <stdio.h>
#include <string.h>

int main() {
    char s[500];
    gets(s);
    char *token = strtok(s, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
    return 0;
}
