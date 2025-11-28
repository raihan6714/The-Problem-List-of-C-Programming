#include <stdio.h>

int main() {
    int n, a[100];
    scanf("%d",&n);
    for (int i=0;i<n;i++) scanf("%d",&a[i]);

    int *p = a;
    for (int i=0;i<n-1;i++)
        for (int j=0;j<n-1-i;j++)
            if (*(p+j) > *(p+j+1)) {
                int t = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = t;
            }

    for (int i=0;i<n;i++)
        printf("%d ", *(p+i));
    return 0;
}
