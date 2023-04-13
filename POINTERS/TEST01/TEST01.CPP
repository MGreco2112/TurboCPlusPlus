//address demo: a program that displays the addresses of variables in memory
#include <iostream.h> //for cout function

void main() { //define main function
   int var1 = 11; //initialize three int values with arbitrary values
   int var2 = 22;
   int var3 = 33;

   cout << &var1 << endl //cout the var name with an '&' header for address
	<< &var2 << endl
	<< &var3 << endl;
}