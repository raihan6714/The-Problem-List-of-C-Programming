#include <stdio.h>
int main() {
    int n; scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        if (i == n || i == 1) {
            for (int j = 1; j <= i; j++)
                printf("*");
        } else {
            printf("*");
            for (int j = 1; j <= i-2; j++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
