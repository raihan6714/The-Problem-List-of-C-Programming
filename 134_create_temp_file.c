#include <stdio.h>

int main() {
    FILE *fp = tmpfile();
    if (!fp) {
        printf("Could not create temp file\n");
        return 1;
    }
    fputs("Temporary data\n", fp);
    printf("Temporary file created\n");
    fclose(fp);
    return 0;
}
