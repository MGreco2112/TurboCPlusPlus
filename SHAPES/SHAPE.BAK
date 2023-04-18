//Shape object to be inherited by other Objects
#include <graphics.h>
#include <conio.h>

class Shape {
   protected:
	int xCo, yCo;
	int linecolor;
	int fillcolor;
   public:
	Shape() {
	   xCo = 0; yCo = 0; linecolor = WHITE; fillcolor = WHITE;
	}

	void set(int x, int y, int lc, int fc) {
	   xCo = x; yCo = y; linecolor = lc; fillcolor = fc;
	}

	void draw() {
	   setcolor(linecolor);
	   setlinestyle(SOLID_LINE, 0, THICK_WIDTH);
	   setfillstyle(SOLID_FILL, fillcolor);
	}
};