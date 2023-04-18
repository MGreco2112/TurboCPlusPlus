//Ball class that inherits from Shape
#include <graphics.h>
#include <conio.h>
#include "SHAPE.CPP"

class Ball : public Shape {
   public:
	Ball() : Shape() {}

	void set(int x, int y, int lc, int fc) {
	   Shape::set(x, y, lc, fc);
	}

	void draw() {
	   Shape::draw();
	   circle(xCo, yCo, 75);
	   floodfill(xCo, yCo, linecolor);
	}
};