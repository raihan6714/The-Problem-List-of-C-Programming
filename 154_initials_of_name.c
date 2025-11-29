#include <stdio.h>
#include <ctype.h>

int main() {
    char name[200];

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    int newWord = 1;

    printf("Initials: ");
    for (int i = 0; name[i] != '\0'; i++) {
        if (newWord && !isspace((unsigned char)name[i])) {
            printf("%c.", toupper((unsigned char)name[i]));
            newWord = 0;
        }
        if (isspace((unsigned char)name[i])) {
            newWord = 1;
        }
    }
    printf("\n");

    return 0;
}
