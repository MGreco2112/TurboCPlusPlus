//RECTANGLES AND LINES IN GRAPHICS MODE
#include <graphics.h>
#include <conio.h>

const int W = 75; //set const width to 75

class Rect { //define Rectangle class
  private: //private fields for x, y, line and fill color
    int xCo;
    int yCo;
    int lineColor;
    int fillColor;
  public:
    Rect() {  //default constructor
       xCo = 0;
       yCo = 0;
       lineColor = WHITE;
       fillColor = WHITE;
    }
    void set(int x, int y, int lc, int fc) { //set x, y, and colors
       xCo = x;
       yCo = y;
       lineColor = lc;
       fillColor = fc;
    }
    void draw(int l_w = THICK_WIDTH, int f_s=SOLID_FILL) { //take line width and fill style
       setcolor(lineColor);
       setlinestyle(SOLID_LINE, 0, l_w);
       rectangle(xCo - W, yCo - W, xCo + W, yCo + W);
       setfillstyle(f_s, fillColor);
       floodfill(xCo, yCo, lineColor);
       line(xCo - W, yCo + W, xCo + W, yCo - W);
    }

};

void main() {
  int driver;
  int mode;

  driver = DETECT;

  initgraph(&driver, &mode, "\\tcpp\\bgi");

  Rect r1;
  Rect r2;
  Rect r3;

  r1.set(80, 150, YELLOW, RED);
  r2.set(250, 150, YELLOW, GREEN);
  r3.set(420, 150, YELLOW, BLUE);

  r1.draw(); //line style, line width, fill pattern
  r2.draw(NORM_WIDTH, INTERLEAVE_FILL);
  r3.draw(THICK_WIDTH, HATCH_FILL);

  getch();
  closegraph();

}