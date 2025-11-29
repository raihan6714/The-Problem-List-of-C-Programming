#include <stdio.h>

int main() {
    FILE *fp = fopen(__FILE__, "r");
    if (fp == NULL) {
        printf("Could not open source file.\n");
        return 1;
    }

    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}