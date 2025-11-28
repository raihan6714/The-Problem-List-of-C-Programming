#include <stdio.h>
#define MAX 10

int main() {
    int r, c, a[MAX][MAX];
    scanf("%d %d", &r, &c);
    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    int top = 0, bottom = r-1, left = 0, right = c-1;

    while (top < bottom && left < right) {
        int prev = a[top+1][left];

        for (int i = left; i <= right; i++) {
            int cur = a[top][i];
            a[top][i] = prev;
            prev = cur;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            int cur = a[i][right];
            a[i][right] = prev;
            prev = cur;
        }
        right--;

        for (int i = right; i >= left; i--) {
            int cur = a[bottom][i];
            a[bottom][i] = prev;
            prev = cur;
        }
        bottom--;

        for (int i = bottom; i >= top; i--) {
            int cur = a[i][left];
            a[i][left] = prev;
            prev = cur;
        }
        left++;
    }

    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
