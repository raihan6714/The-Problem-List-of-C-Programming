#include <stdio.h>
#define MAX 10

int main() {
    int n, a[MAX][MAX];
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    int primary = 0, secondary = 0;
    for (int i=0;i<n;i++) {
        primary += a[i][i];
        secondary += a[i][n-1-i];
    }

    printf("Primary diagonal sum = %d\n", primary);
    printf("Secondary diagonal sum = %d\n", secondary);
    return 0;
}
