#include <stdio.h>
int main() {
    int n, a=0, b=1, next, sum=0;
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        if (i % 2 == 0) sum += a;
        next = a + b;
        a = b;
        b = next;
    }

    printf("Sum = %d\n", sum);
    return 0;
}
