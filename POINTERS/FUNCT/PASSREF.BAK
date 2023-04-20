//pass arg by reference

#include <iostream.h> //for cout function
#include <conio.h> //for getch function

void main() { //define main function
   void centimize(double&); //declare centimize function that takes double by reference

   double var = 10.0; //initlze double var to 10.0
   cout << endl << "var=" << var << " inches.";  //cout value of var as inches

   centimize(var); //call centimize function on var
   cout << endl << "var=" << var << " centimeters."; //cout new value of var as centimeters

   getch(); //call get ch to hang on cmd screen to consult results
}

void centimize(double& v) { //define centimize function
   v *= 2.54; //multiply arg by a value of 2.54
}