#include <stdio.h>

int main() {
    int n;
    int a[100];
    scanf("%d",&n);
    for (int i=0;i<n;i++) scanf("%d",&a[i]);

    int *p = a;
    int max = *p;
    for (int i=1;i<n;i++)
        if (*(p+i) > max) max = *(p+i);

    printf("Max = %d\n", max);
    return 0;
}
