#include <stdio.h>
int main() {
    int n, total = 0;
    scanf("%d", &n);

    for (int i=1; i<=n; i++) total += i;

    int k = total;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("%d ", k--);
        printf("\n");
    }
    return 0;
}
