//Main file to run logic from imported Ball, Rect, and Tria classes
#include <graphics.h>
#include <conio.h>
#include "SHAPE.CPP"
#include "BALL.CPP"
#include "RECT.CPP"
// #include "TRIA.CPP"

void main() {
   int driver, mode;
   driver = DETECT;

   initgraph(&driver, &mode, "\\tc\\bgi");

   Ball b1;
   Rect r2;
// Tria t3;

   b1.set(80, 150, YELLOW, RED);
   r2.set(250, 150, YELLOW, GREEN);
// t3.set(420, 150, YELLOW, BLUE);

   b1.draw();
   r2.draw();
// t3.draw();

   getch();
   closegraph();
}