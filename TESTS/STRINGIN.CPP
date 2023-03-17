#include <iostream.h>
#include <iomanip.h> //incl for setw function
#include <stdlib.h>  //incl for clear screen

void main() {
   const int MAX = 10; //set max var for length constraint
   char string[MAX];   //declare arr of size max

   system("CLS");

   cout << "Enter your name: ";
   cin >> setw(MAX) >> string;  //set width of input field, capture up to val - 1 to desired var

   cout << endl << "Your name is " << string; //output contents of string


}