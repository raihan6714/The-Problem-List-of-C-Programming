#include <stdio.h>
struct Complex { float r, i; };

int main() {
    struct Complex a, b, sum;
    scanf("%f %f", &a.r, &a.i);
    scanf("%f %f", &b.r, &b.i);
    sum.r = a.r + b.r;
    sum.i = a.i + b.i;
    printf("Sum = %.2f + %.2fi\n", sum.r, sum.i);
    return 0;
}
