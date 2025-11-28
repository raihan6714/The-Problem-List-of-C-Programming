#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, x1, x2, realPart, imagPart;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation\n");
        return 0;
    }

    d = b*b - 4*a*c;

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        printf("Real and distinct roots: %.2lf %.2lf\n", x1, x2);
    } else if (d == 0) {
        x1 = -b / (2*a);
        printf("Real and equal roots: %.2lf %.2lf\n", x1, x1);
    } else {
        realPart = -b / (2*a);
        imagPart = sqrt(-d) / (2*a);
        printf("Complex roots: %.2lf+%.2lfi %.2lf-%.2lfi\n",
               realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
