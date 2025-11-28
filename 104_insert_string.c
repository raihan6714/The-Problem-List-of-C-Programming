#include <stdio.h>
#include <string.h>

int main() {
    char s1[400], s2[200], res[600];
    int pos;
    gets(s1);
    gets(s2);
    scanf("%d", &pos);

    int n1 = strlen(s1), n2 = strlen(s2);
    if (pos < 0) pos = 0;
    if (pos > n1) pos = n1;

    int k = 0;
    for (int i=0;i<pos;i++) res[k++] = s1[i];
    for (int i=0;i<n2;i++) res[k++] = s2[i];
    for (int i=pos;i<n1;i++) res[k++] = s1[i];
    res[k] = '\0';

    printf("%s\n", res);
    return 0;
}
