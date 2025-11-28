#include <stdio.h>
#define MAX 10

int main() {
    int r, c, a[MAX][MAX];
    scanf("%d %d", &r, &c);

    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for (int j=0;j<c;j++) {
        int t = a[0][j];
        a[0][j] = a[r-1][j];
        a[r-1][j] = t;
    }

    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
