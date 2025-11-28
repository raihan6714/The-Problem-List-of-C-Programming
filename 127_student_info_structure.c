#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n;
    scanf("%d\n", &n);
    struct Student s[100];

    for (int i=0;i<n;i++)
        scanf("%[^\n] %d %f%*c", s[i].name, &s[i].roll, &s[i].marks);

    for (int i=0;i<n;i++)
        printf("%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    return 0;
}
