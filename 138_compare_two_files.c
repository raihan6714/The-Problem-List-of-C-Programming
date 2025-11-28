#include <stdio.h>

int main() {
    char f1[100], f2[100];
    scanf("%s %s", f1, f2);
    FILE *a = fopen(f1, "r");
    FILE *b = fopen(f2, "r");
    if (!a || !b) { printf("Error opening files\n"); return 1; }

    int c1, c2, pos = 0, diff = 0;
    while (1) {
        c1 = fgetc(a);
        c2 = fgetc(b);
        pos++;
        if (c1 == EOF || c2 == EOF) break;
        if (c1 != c2) {
            printf("Mismatch at position %d: %c vs %c\n", pos, c1, c2);
            diff = 1;
        }
    }

    if (!diff) printf("Files are identical\n");
    fclose(a); fclose(b);
    return 0;
}
