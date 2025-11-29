#include <stdio.h>

int main() {
    printf("Before return\n");

    return 0;

    // The following lines are unreachable:
    printf("This line is unreachable and may cause a compiler warning.\n");
    printf("Because 'return 0;' ended the function already.\n");
}
