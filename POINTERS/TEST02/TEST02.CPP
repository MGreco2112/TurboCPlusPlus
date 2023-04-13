//pointer variable demo

#include <iostream.h> //for cout

void main() {
   int var1 = 11;
   int var2 = 22;

   cout << &var1 << endl
	<< &var2 << endl;

   int* ptr;

   ptr = &var1;
   cout << ptr << endl;

   ptr = &var2;
   cout << ptr << endl;
}