#include <stdio.h>

int main() {
    int n, b[50], i=0;
    scanf("%d", &n);

    if (n == 0) { printf("0\n"); return 0; }

    while (n > 0) {
        b[i++] = n % 2;
        n /= 2;
    }
    for (int j=i-1;j>=0;j--)
        printf("%d", b[j]);
    printf("\n");
    return 0;
}
