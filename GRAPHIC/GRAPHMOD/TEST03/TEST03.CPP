//polygons with object inheritance
#include <graphics.h> //import graphics header file
#include <conio.h> //import console in out header file

const int W = 75; //width constant set to 75

class Shape { //define Shape class
  protected:  //protected fields
     int xCo; //x and y coordinates stored as int
     int yCo;
     int lineColor; //line and fill color for shape
     int fillColor;
  public:     //public methods
     Shape() {  //no args constructor
	xCo = 0;
	yCo = 0;
	lineColor = WHITE;
	fillColor = WHITE;
     }

     void set(int x, int y, int lc, int fc) { //assign input values to fields
	xCo = x;
	yCo = y;
	lineColor = lc;
	fillColor = fc;
     }

     void draw(int lw = THICK_WIDTH, int fs = SOLID_FILL) { //basic draw method: sets color, line style, and fill style
	setcolor(lineColor);
	setlinestyle(SOLID_LINE, 0, lw);
	setfillstyle(fs, fillColor);
     }

};

class Ball : public Shape { //Ball inherits from Shape
  public:
     Ball() : Shape() {} //default constuctor utilizes Shape constuctor

     void set(int x, int y, int lc, int fc) {  //set method
	 Shape::set(x, y, lc, fc); //calls set method from Shape using ::
     }

     void draw(int lw = THICK_WIDTH, int fs = SOLID_FILL) { //draw method
	Shape::draw(lw, fs); //calls Shape's Draw, sets colors accordingly
	circle(xCo, yCo, W); //instantiates Circle obj from given args
	floodfill(xCo, yCo, lineColor); //fills coordiantes with set fill
     }

};

class Rect : public Shape { //Rect class inherits from Shape
   public:
      Rect() : Shape() {} //utilizes Shape def const as default constructor

      void set(int x, int y, int lc, int fc) { //set method
	 Shape::set(x, y, lc, fc); //calls Shape's set method
      }

      void draw(int lw = THICK_WIDTH, int fs = SOLID_FILL) { //draw method
	 Shape::draw(lw, fs); //calls Shape's draw method
	 //instantiates rectangle object at given points
	 rectangle(xCo - W, yCo - W, xCo + W, yCo + W);
	 floodfill(xCo, yCo, lineColor); //fill from these points to linecolor
	 moveto(xCo - W, yCo + W); //draw diagonal line through rect
	 lineto(xCo + W, yCo - W);
      }
};

class Tria : public Shape { //Tria inherits from Shape
  public:
     Tria() : Shape() {} //utilizes Shape's default constructor

     void set(int x, int y, int lc, int fc) { //set method
	 Shape::set(x, y, lc, fc); //calls Shape's set method
     }

     void draw(int lw = THICK_WIDTH, int fs = SOLID_FILL) { //draw method
	 int triArray[] = { xCo,   yCo-W,
			  xCo+W, yCo+W,
			  xCo-W, yCo+W };
//above is an array that holds the points that define the polygon
	 Shape::draw(lw, fs); //call's Shape's draw method
	 fillpoly(3, triArray);
	 //fillpoly takes the number of points of the shape and the address
	 //of the array. This function draws a line from the first point
	 //to the second, then the second to the third, and so on.
	 //it closes last point to first point automatically

	 //the drawpoly() graphics function can be used without filling it
     }
};

void main() {
   int driver; //declare driver and mode vars
   int mode;

   driver = DETECT; //set driver to DETECT

   initgraph(&driver, &mode, "\\tcpp\\bgi"); //activate Graphics Mode

   Ball b1; //declare three objects of inherited Shape classes
   Rect r2;
   Tria t3;

   b1.set(80, 150, YELLOW, RED);    //overwrite default values in fields
   r2.set(250, 150, YELLOW, GREEN);
   t3.set(420, 150, YELLOW, BLUE);

   b1.draw();  //draw shapes, no args gives default line width and fill pattern
   r2.draw(0, 7);
   t3.draw(3, 2);

   getch();  //await input
   closegraph(); //close graphics mode
}