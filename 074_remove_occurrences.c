#include <stdio.h>
#define MAX 100

int main() {
    int n, a[MAX], x;
    scanf("%d", &n);
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d", &x);

    int j = 0;
    for (int i=0;i<n;i++)
        if (a[i] != x)
            a[j++] = a[i];

    for (int i=0;i<j;i++)
        printf("%d ", a[i]);

    return 0;
}
