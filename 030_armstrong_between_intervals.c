#include <stdio.h>
#include <math.h>

int main() {
    int l, r;
    scanf("%d %d", &l, &r);

    for (int n = l; n <= r; n++) {
        int temp = n, digits = 0, sum = 0;

        while (temp) { digits++; temp /= 10; }

        temp = n;
        while (temp) {
            int r2 = temp % 10;
            sum += pow(r2, digits);
            temp /= 10;
        }

        if (sum == n) printf("%d ", n);
    }
    return 0;
}
