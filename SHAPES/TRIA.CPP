//Triangle class that inherits from imported Shape class
#include <graphics.h>
#include <conio.h>
#include "SHAPE.CPP"

class Tria : public Shape {
  public:
	Tria() : Shape() {}

	void set(int x, int y, int lc, int fc) {
	   Shape::set(x, y, lc, fc);
	}

	void draw() {
	   int triarray[] = { xCo,    yCo-75,
			      xCo+75, yCo+75,
			      xCo-75, yCo+75 };
	   Shape::draw();
	   fillpoly(3, triarray);
	}
};