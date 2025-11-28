#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n;
    scanf("%d\n",&n);
    struct Student s[100], temp;

    for (int i=0;i<n;i++)
        scanf("%[^\n] %d %f%*c", s[i].name, &s[i].roll, &s[i].marks);

    for (int i=0;i<n-1;i++)
        for (int j=0;j<n-1-i;j++)
            if (strcmp(s[j].name, s[j+1].name) > 0) {
                temp = s[j]; s[j] = s[j+1]; s[j+1] = temp;
            }

    for (int i=0;i<n;i++)
        printf("%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    return 0;
}
