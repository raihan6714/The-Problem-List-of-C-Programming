#include <stdio.h>
int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if (a >= b && a >= c) printf("%.2f\n", a);
    else if (b >= a && b >= c) printf("%.2f\n", b);
    else printf("%.2f\n", c);

    return 0;
}
