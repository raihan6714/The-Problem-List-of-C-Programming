#include <stdio.h>
#define MAX 10

int main() {
    int r, c, a[MAX][MAX], b[MAX][MAX], sum[MAX][MAX];
    scanf("%d %d", &r, &c);

    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++)
            scanf("%d",&b[i][j]);

    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++)
            sum[i][j] = a[i][j] + b[i][j];

    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
