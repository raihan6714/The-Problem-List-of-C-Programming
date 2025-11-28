#include <stdio.h>
#define MAX 100

int main() {
    int n, a[MAX], key;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, found = -1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) {
            found = mid;
            break;
        } else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (found != -1) printf("Found at index %d\n", found);
    else printf("Not found\n");

    return 0;
}
