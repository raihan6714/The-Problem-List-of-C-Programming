#include <stdio.h>
#define MAX 100

int main() {
    int n, d, a[MAX], temp[MAX];
    scanf("%d", &n);
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d", &d);

    d = d % n;
    int k = 0;
    for (int i=d;i<n;i++) temp[k++] = a[i];
    for (int i=0;i<d;i++) temp[k++] = a[i];

    for (int i=0;i<n;i++)
        printf("%d ", temp[i]);

    return 0;
}
