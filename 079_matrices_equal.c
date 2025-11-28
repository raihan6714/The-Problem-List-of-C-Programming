#include <stdio.h>
#define MAX 10

int main() {
    int r, c, a[MAX][MAX], b[MAX][MAX];
    scanf("%d %d", &r, &c);

    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++)
            scanf("%d", &a[i][j]);

    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++)
            scanf("%d", &b[i][j]);

    int equal = 1;
    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++)
            if (a[i][j] != b[i][j]) {
                equal = 0;
                break;
            }

    if (equal) printf("Equal\n");
    else printf("Not Equal\n");

    return 0;
}
