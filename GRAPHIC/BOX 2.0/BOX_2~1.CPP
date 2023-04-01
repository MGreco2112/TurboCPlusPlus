//updated window demo, using new box type
#include <string.h> //import string header
#include <conio.h> //import console io header

const int LEFT = 25;  //default window dimensions
const int TOP = 6;
const int RIGHT = 55;
const int BOTTOM = 18;
const int LEN = 500; //define max length of string at global scope

class Box { //define Box class
  private:  //define private fields for box dimensions and content string and color
    int left;
    int right;
    int top;
    int bottom;
    char str[LEN];
    int color;

  public:
    Box() { //basic no args constructor
       left = LEFT; top = TOP;
       right = RIGHT; bottom = BOTTOM;
       color = WHITE;
    }
    Box(int l, int t, int r, int b, int c=WHITE) { //five args constructor, c with default value
       left = l; top = t; right = r; bottom = b; color = c;
    }

    void text(char s[]) {
       strcpy(str, s);
    }

    void erase() {
       window(left, top, right, bottom);
       clrscr();
    }

    void draw() {
       erase();
       window(left, top, right, bottom+1);
       int width = right - left + 1;
       int height = bottom - top + 1;
       textcolor(color);

       for(int i = 1; i <= width; i++) {
	 gotoxy(i, 1);
	 putch(char(205));
	 gotoxy(i, height);
	 putch(char(205));
       }

       for (i = 1; i <= height; i++) {
	 gotoxy(1, i);
	 putch(char(186));
	 gotoxy(width, i);
	 putch(char(186));
       }

       gotoxy(1, 1);
       putch(char(201));
       gotoxy(width, 1);
       putch(char(187));
       gotoxy(1, height);
       putch(char(200));
       gotoxy(width, height);
       putch(char(188));

       window(left+2, top+1, right-2, bottom-3);
       cputs(str);

       window(left, top, right, bottom+1);
       gotoxy(3, height-1);
       cputs("Press any key to continue: ");
       textcolor(WHITE);
    }

};

void main() {
  clrscr(); //clear screen

  Box a;

  Box b(1, 1, 31, 8, YELLOW);

  a.text("\"The time,\" said the \n\r\
Duchess, \"is surely ripe;\n\r\
make haste, lest seconds\n\r\
spoil.\"");

  b.text("Should you continue\n\r\
along the present path you\n\r\
risk invenstigation\n\r\
for felonious chicanery.");

  a.draw();
  getch();
  a.erase();
  b.draw();
  getch();
  b.erase();
  b.text("Thank you");
  b.draw();
  getch();

}