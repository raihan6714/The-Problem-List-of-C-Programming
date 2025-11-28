#include <stdio.h>
#define MAX 100

int main() {
    int n, a[MAX];
    scanf("%d", &n);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Average = %.2f\n", (float)sum / n);
    return 0;
}
