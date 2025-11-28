#include <stdio.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    struct Student s[2] = {{"A",1}, {"B",2}}, r[2];
    FILE *fp = fopen("stud.dat", "wb");
    fwrite(s, sizeof(struct Student), 2, fp);
    fclose(fp);

    fp = fopen("stud.dat", "rb");
    fread(r, sizeof(struct Student), 2, fp);
    fclose(fp);

    for (int i=0;i<2;i++)
        printf("%s %d\n", r[i].name, r[i].roll);
    return 0;
}
