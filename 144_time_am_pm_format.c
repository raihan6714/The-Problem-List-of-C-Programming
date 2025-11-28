#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    int hour = tm->tm_hour;
    char *ampm = (hour >= 12) ? "PM" : "AM";
    if (hour == 0) hour = 12;
    else if (hour > 12) hour -= 12;

    printf("%02d:%02d:%02d %s\n", hour, tm->tm_min, tm->tm_sec, ampm);
    return 0;
}
