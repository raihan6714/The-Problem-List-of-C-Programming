#include <stdio.h>

int main() {
    float x;
    char s[50];
    scanf("%f", &x);
    sprintf(s, "%.2f", x);
    printf("%s\n", s);
    return 0;
}
