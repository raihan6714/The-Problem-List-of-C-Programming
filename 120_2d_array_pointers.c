#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30, d = 40;
    int *p[2][2] = { { &a, &b }, { &c, &d } };

    printf("%d\n", *p[0][0]);
    printf("%d\n", *p[1][1]);
    return 0;
}
