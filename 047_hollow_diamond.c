#include <stdio.h>
int main() {
    int n; scanf("%d", &n);

    // Upper part
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n-i; s++) printf(" ");
        if (i == 1) printf("*");
        else {
            printf("*");
            for (int j = 1; j <= 2*i-3; j++) printf(" ");
            printf("*");
        }
        printf("\n");
    }

    // Lower part
    for (int i = n-1; i >= 1; i--) {
        for (int s = 1; s <= n-i; s++) printf(" ");
        if (i == 1) printf("*");
        else {
            printf("*");
            for (int j = 1; j <= 2*i-3; j++) printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
