#include <stdio.h>
#define MAX 10

int main() {
    int r, c, a[MAX][MAX];
    scanf("%d %d", &r, &c);

    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            if (i==0 || i==r-1 || j==0 || j==c-1)
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
