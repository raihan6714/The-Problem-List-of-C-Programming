#include <stdio.h>
#define MAX 100

int main() {
    int n, a[MAX], b[MAX];
    scanf("%d",&n);
    for (int i=0;i<n;i++) scanf("%d",&a[i]);

    for (int i=0;i<n;i++)
        b[i] = a[i];

    for (int i=0;i<n;i++)
        printf("%d ", b[i]);

    return 0;
}
