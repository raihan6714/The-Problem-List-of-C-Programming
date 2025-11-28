#include <stdio.h>
#include <stdlib.h>

struct Flex {
    int n;
    int arr[];  // flexible array member
};

int main() {
    int n;
    scanf("%d", &n);
    struct Flex *f = malloc(sizeof(struct Flex) + n * sizeof(int));
    f->n = n;

    for (int i=0;i<n;i++) {
        scanf("%d", &f->arr[i]);
    }

    for (int i=0;i<n;i++)
        printf("%d ", f->arr[i]);

    free(f);
    return 0;
}
