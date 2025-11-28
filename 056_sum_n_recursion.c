#include <stdio.h>

int sumNat(int n) {
    if (n <= 1) return n;
    return n + sumNat(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Sum = %d\n", sumNat(n));
    return 0;
}
