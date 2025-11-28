#include <stdio.h>

int isPrime(int x) {
    if (x <= 1) return 0;
    for (int i = 2; i*i <= x; i++)
        if (x % i == 0) return 0;
    return 1;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
        if (isPrime(i)) printf("%d ", i);

    return 0;
}
