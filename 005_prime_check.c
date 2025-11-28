#include <stdio.h>
int main() {
    int n, i, flag = 1;
    scanf("%d", &n);
    if (n <= 1) flag = 0;

    for (i = 2; i * i <= n; i++)
        if (n % i == 0) flag = 0;

    if (flag) printf("Prime\n");
    else printf("Not Prime\n");
    return 0;
}
