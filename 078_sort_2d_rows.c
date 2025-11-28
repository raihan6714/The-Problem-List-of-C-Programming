#include <stdio.h>
#define MAX 10

int main() {
    int r, c, a[MAX][MAX];
    scanf("%d %d", &r, &c);

    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    // sort each row (bubble sort)
    for (int i=0;i<r;i++) {
        for (int x=0;x<c-1;x++)
            for (int y=0;y<c-1-x;y++)
                if (a[i][y] > a[i][y+1]) {
                    int t = a[i][y];
                    a[i][y] = a[i][y+1];
                    a[i][y+1] = t;
                }
    }

    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
