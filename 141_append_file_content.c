#include <stdio.h>

int main() {
    char src[100], dst[100];
    scanf("%s %s", src, dst);
    FILE *s = fopen(src, "r");
    FILE *d = fopen(dst, "a");
    if (!s || !d) { printf("Error\n"); return 1; }

    int ch;
    while ((ch = fgetc(s)) != EOF)
        fputc(ch, d);

    fclose(s); fclose(d);
    printf("Appended\n");
    return 0;
}
