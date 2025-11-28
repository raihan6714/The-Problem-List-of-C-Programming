#include <stdio.h>
#include <time.h>

int main() {
    int year = 2025;
    struct tm tm = {0};

    tm.tm_year = year - 1900;
    tm.tm_mon  = 0;
    tm.tm_mday = 1;

    mktime(&tm);

    printf("Format 1: %02d-%02d-%04d\n", tm.tm_mday, tm.tm_mon+1, year);
    printf("Format 2: %04d/%02d/%02d\n", year, tm.tm_mon+1, tm.tm_mday);
    printf("Format 3: %s %02d, %04d\n",
           "Jan", tm.tm_mday, year);
    return 0;
}
