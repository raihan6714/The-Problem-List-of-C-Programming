#include <stdio.h>

int main() {
    double x;
    char s[50];
    scanf("%lf", &x);
    sprintf(s, "%.4lf", x);
    printf("%s\n", s);
    return 0;
}
