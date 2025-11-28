#include <stdio.h>

struct Student {
    int id;
    int age;
    char name[50];
};

int main() {
    int n;
    scanf("%d\n",&n);
    struct Student s[100], temp;

    for (int i=0;i<n;i++)
        scanf("%d %d %[^\n]%*c", &s[i].id, &s[i].age, s[i].name);

    // sort by age then id
    for (int i=0;i<n-1;i++)
        for (int j=0;j<n-1-i;j++) {
            if (s[j].age > s[j+1].age ||
               (s[j].age == s[j+1].age && s[j].id > s[j+1].id)) {
                temp = s[j]; s[j] = s[j+1]; s[j+1] = temp;
            }
        }

    for (int i=0;i<n;i++)
        printf("%d %d %s\n", s[i].id, s[i].age, s[i].name);
    return 0;
}
