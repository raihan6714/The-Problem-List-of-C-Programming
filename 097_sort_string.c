#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    gets(s);
    int n = strlen(s);

    for (int i=0;i<n-1;i++)
        for (int j=0;j<n-1-j;j++)
            if (s[j] > s[j+1]) {
                char t=s[j]; s[j]=s[j+1]; s[j+1]=t;
            }

    printf("%s\n", s);
    return 0;
}
