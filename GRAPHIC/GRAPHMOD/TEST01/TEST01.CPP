//test of graphics mode in CPP
//simple ball on screen
#include <graphics.h> //import graphics header file
#include <conio.h> //import console in out header

const int RAD = 75; //radius of ball

class Ball {
  private:
    int xCo; //coordinates of center
    int yCo;
  public:
    Ball() { //default constructor sets x and y to 0
       xCo = 0;
       yCo = 0;
    }
    void set(int x, int y) { //set method assigns given x/y to fields
       xCo = x;
       yCo = y;
    }
    void draw() { //initializes circle object with x/y and radius elements
       circle(xCo, yCo, RAD);
    }
};

void main() {
   int driver; //define driver and mode ints for graphics style
   int mode;

   driver = DETECT; //set driver to DETECT constant from graphics.h
   //this autodetects the graphics setup of the system at compile time

   initgraph(&driver, &mode, "\\tcpp\\bgi"); //initialize graphics mode
   //this uses the driver and mode (if driver is not DETECT and the path
   //to the graphics libary in the turbo c++ directory

   Ball b1; //initialize three ball objects
   Ball b2;
   Ball b3;

   b1.set(320, 150);  //set ball object center locations to x/y coordinates
   b2.set(255, 150);
   b3.set(385, 150);

   b1.draw(); //draw the three balls on the screen
   b2.draw();
   b3.draw();

   getch(); //await keyboard input
   closegraph(); //end graphics mode

}