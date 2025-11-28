#include <stdio.h>

typedef struct {
    float r, i;
} Complex;

Complex add(Complex a, Complex b) {
    Complex c;
    c.r = a.r + b.r;
    c.i = a.i + b.i;
    return c;
}

int main() {
    Complex a, b, c;
    scanf("%f %f", &a.r, &a.i);
    scanf("%f %f", &b.r, &b.i);
    c = add(a, b);
    printf("Sum = %.2f + %.2fi\n", c.r, c.i);
    return 0;
}
