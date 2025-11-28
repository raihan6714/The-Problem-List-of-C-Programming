#include <stdio.h>
#include <string.h>

int main() {
    char a[105], b[105], res[210];
    gets(a);
    gets(b);
    int i = strlen(a)-1, j = strlen(b)-1, k = 0, carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        res[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }
    res[k] = '\0';

    // reverse result
    for (int l=0, r=k-1; l<r; l++, r--) {
        char t = res[l]; res[l] = res[r]; res[r] = t;
    }
    printf("%s\n", res);
    return 0;
}
