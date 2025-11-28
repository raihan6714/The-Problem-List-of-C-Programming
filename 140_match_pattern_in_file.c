#include <stdio.h>
#include <string.h>

int main() {
    char fname[100], pattern[100], line[1000];
    scanf("%s", fname);
    getchar();
    gets(pattern);

    FILE *fp = fopen(fname, "r");
    if (!fp) { printf("Error\n"); return 1; }

    while (fgets(line, sizeof(line), fp)) {
        if (strstr(line, pattern))
            printf("%s", line);
    }
    fclose(fp);
    return 0;
}
