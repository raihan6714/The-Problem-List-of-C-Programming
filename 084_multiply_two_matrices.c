#include <stdio.h>
#define MAX 10

int main() {
    int r1, c1, r2, c2;
    int a[MAX][MAX], b[MAX][MAX], m[MAX][MAX] = {0};

    scanf("%d %d", &r1, &c1);
    for (int i=0;i<r1;i++)
        for (int j=0;j<c1;j++)
            scanf("%d",&a[i][j]);

    scanf("%d %d", &r2, &c2);
    for (int i=0;i<r2;i++)
        for (int j=0;j<c2;j++)
            scanf("%d",&b[i][j]);

    if (c1 != r2) {
        printf("Multiplication not possible\n");
        return 0;
    }

    for (int i=0;i<r1;i++)
        for (int j=0;j<c2;j++)
            for (int k=0;k<c1;k++)
                m[i][j] += a[i][k] * b[k][j];

    for (int i=0;i<r1;i++) {
        for (int j=0;j<c2;j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }

    return 0;
}
