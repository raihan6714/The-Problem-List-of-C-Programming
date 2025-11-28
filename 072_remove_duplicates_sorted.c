#include <stdio.h>
#define MAX 100

int main() {
    int n, a[MAX], b[MAX];
    scanf("%d", &n);
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || a[i] != a[i-1]) {
            b[j++] = a[i];
        }
    }

    for (int i=0;i<j;i++)
        printf("%d ", b[i]);

    return 0;
}
