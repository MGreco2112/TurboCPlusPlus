//Rectangle class that inherits from imported Shape

#include <graphics.h>
#include <conio.h>
#include "SHAPE.CPP"

class Rect : public Shape {
   public:
	Rect() : Shape() {}

	void set(int x, int y, int lc, int fc) {
	   Shape::set(x, y, lc, fc);
	}

	void draw() {
	   Shape::draw();
	   rectangle(xCo-75, yCo-75, xCo+75, yCo+75);
	   floodfill(xCo, yCo, linecolor);
	   moveto(xCo-75, yCo-75);
	   lineto(xCo+75, yCo-75);
	}
};