#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");  // path depends on your Turbo C setup

    setcolor(WHITE);
    circle(200, 200, 100);    // center (200,200), radius 100

    getch();                  // wait for a key
    closegraph();
    return 0;
}
