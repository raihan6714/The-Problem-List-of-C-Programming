#include <stdio.h>

const char* boolToStr(int b) {
    return b ? "true" : "false";
}

int main() {
    int b;
    scanf("%d", &b); // 0 or non-zero
    printf("%s\n", boolToStr(b));
    return 0;
}
