#include <stdio.h>

struct Distance {
    int feet;
    float inch;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Distance d, sum = {0, 0.0};

    for (int i=0;i<n;i++) {
        scanf("%d %f", &d.feet, &d.inch);
        sum.feet += d.feet;
        sum.inch += d.inch;
        while (sum.inch >= 12.0) {
            sum.inch -= 12.0;
            sum.feet++;
        }
    }

    printf("Total = %d feet %.2f inch\n", sum.feet, sum.inch);
    return 0;
}
