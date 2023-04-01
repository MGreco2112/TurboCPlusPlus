//basic window() function demo
#include <string.h> //import string header
#include <conio.h> //import console io header

const int LEN = 500; //define max length of string at global scope

class Box { //define Box class
  private:  //define private fields for box dimensions and content string
    int left;
    int right;
    int top;
    int bottom;
    char str[LEN];

  public: //public methods for constructor and erasing
    Box(int l, int r, int t, int b, char s[]) {
       left = l;  //assign args to fields of class instance
       right = r;
       top = t;
       bottom = b;
       strcpy(str, s); //copy passed in char arr to field with strcpy
       window(left, top, right, bottom); //set window with passed in dimensions
       cputs(str); //display text within window created
		  // cputs works as cout but to created window, not to console
    }

    void erase() {
       window(left, top, right, bottom); //set window
       clrscr(); //clear screen
    }
};

void main() {
  clrscr(); //clear screen

  char s1[] = "The disk drive is jammed\n\r\
or on fire, or the CPU\n\r\
is flooded. Correct the\n\r\
situation and try again.\n\r\
Press Enter to continue: ";  //set string literal to char arr s1
	  //cputs does not recognize \n as terminal does, needing \n\r used together to get the desired result

  char s2[] = "This is a string that will wrap at the right \
edge of the window, probably breaking words innappropriately \
in the process.";

  Box a(25, 6, 55, 18, s1); //s1 placed in the middle of the screen
  getch(); //wait for keyboard input
  a.erase(); //erase box a

  Box b(1, 1, 25, 10, s2); //s2 placed in upper left corner
  getch(); //wait for keypress

}