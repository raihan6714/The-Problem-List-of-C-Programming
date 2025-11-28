#include <stdio.h>
#include <sys/stat.h>

int main() {
    char fname[100];
    scanf("%s", fname);
    if (chmod(fname, 0444) == 0)
        printf("Read-only now\n");
    else
        printf("Error\n");
    return 0;
}
