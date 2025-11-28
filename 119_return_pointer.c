#include <stdio.h>

int* getMax(int *a, int *b) {
    return (*a > *b) ? a : b;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    int *p = getMax(&x, &y);
    printf("Max = %d\n", *p);
    return 0;
}
