#include <stdio.h>
int main() {
    char op;
    float a, b;
    scanf(" %c", &op);
    scanf("%f %f", &a, &b);

    switch(op) {
        case '+': printf("= %.2f\n", a + b); break;
        case '-': printf("= %.2f\n", a - b); break;
        case '*': printf("= %.2f\n", a * b); break;
        case '/': printf("= %.2f\n", a / b); break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
