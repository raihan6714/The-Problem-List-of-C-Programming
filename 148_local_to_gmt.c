#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *gmt = gmtime(&t);

    printf("GMT: %02d:%02d:%02d %02d-%02d-%04d\n",
           gmt->tm_hour, gmt->tm_min, gmt->tm_sec,
           gmt->tm_mday, gmt->tm_mon+1, gmt->tm_year+1900);
    return 0;
}
