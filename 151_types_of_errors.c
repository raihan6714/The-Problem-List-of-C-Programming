#include <stdio.h>

int main() {
    printf("Types of errors in C programming:\n\n");

    printf("1) Syntax errors:\n");
    printf("   - Violations of C grammar, detected by compiler.\n");
    printf("   - Example: missing semicolon, wrong keyword.\n\n");

    printf("2) Semantic errors:\n");
    printf("   - Syntactically correct but meaning is wrong.\n");
    printf("   - Example: assigning float* to int without cast.\n\n");

    printf("3) Runtime errors:\n");
    printf("   - Occur while program is running.\n");
    printf("   - Example: division by zero, null pointer dereference.\n\n");

    printf("4) Logical errors:\n");
    printf("   - Program runs but gives wrong result.\n");
    printf("   - Example: using '+' instead of '*' in formula.\n\n");

    printf("5) Linker errors (link-time errors):\n");
    printf("   - Occur when linker cannot find function/variable definitions.\n");
    printf("   - Example: calling a function that is never defined.\n");

    return 0;
}
