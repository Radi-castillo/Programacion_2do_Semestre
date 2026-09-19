#include <graphics.h>

int main() {

int gd = DETECT, gm;
initgraph(&gd, &gm, "");

setcolor(RED);
circle(getmaxx()/2, getmaxy()/2, 50 );

getch();
closegraph();

return 0;

}