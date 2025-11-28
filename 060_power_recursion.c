#include <stdio.h>

long long power(int base, int exp) {
    if (exp == 0) return 1;
    if (exp % 2 == 0) {
        long long half = power(base, exp / 2);
        return half * half;
    } else {
        return (long long)base * power(base, exp - 1);
    }
}

int main() {
    int base, exp;
    scanf("%d %d", &base, &exp);
    printf("%lld\n", power(base, exp));
    return 0;
}
