#include <stdio.h>
int main() {
    float l, w;
    scanf("%f %f", &l, &w);
    printf("Area = %.2f\n", l * w);
    printf("Perimeter = %.2f\n", 2 * (l + w));
    return 0;
}
