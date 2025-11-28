#include <stdio.h>
#include <math.h>
#define MAX 10

int main() {
    int n, a[MAX][MAX];
    scanf("%d", &n);

    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    int trace = 0;
    long long sumSq = 0;

    for (int i=0;i<n;i++) {
        trace += a[i][i];
        for (int j=0;j<n;j++)
            sumSq += (long long)a[i][j]*a[i][j];
    }

    double normal = sqrt((double)sumSq);
    printf("Trace = %d\n", trace);
    printf("Normal = %.2f\n", normal);

    return 0;
}
