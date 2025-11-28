#include <stdio.h>

int main() {
    char old[100], newn[100];
    scanf("%s %s", old, newn);
    if (rename(old, newn) == 0)
        printf("Renamed\n");
    else
        printf("Error\n");
    return 0;
}
