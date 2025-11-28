#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int oct[50], i=0;

    if (n == 0) { printf("0\n"); return 0; }

    while (n > 0) {
        oct[i++] = n % 8;
        n /= 8;
    }
    for (int j=i-1;j>=0;j--)
        printf("%d", oct[j]);
    printf("\n");
    return 0;
}
