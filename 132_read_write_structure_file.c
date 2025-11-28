#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s = {"Raihan", 1, 95.5}, s2;
    FILE *fp = fopen("student.bin", "wb");
    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);

    fp = fopen("student.bin", "rb");
    fread(&s2, sizeof(s2), 1, fp);
    fclose(fp);

    printf("%s %d %.2f\n", s2.name, s2.roll, s2.marks);
    return 0;
}
