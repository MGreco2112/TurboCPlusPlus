//performing operations on variable values using pointers
#include <iostream.h> //for cout function

void main() { //define main function
   int var1, var2; //define two int variables
   int* ptr; //define int pointer variable

   ptr = &var1; //pointer is assigned value of address of var1

   *ptr = 37;   //value of the variable pointed to by ptr is assigned
		//value of 37 (in other words, var1 = 37 via pointer references)
   var2 = *ptr; //var2 is assigned the value at index location stored within ptr

   cout << var2 << endl; //cout var2, assigned value from pointer handoffs
}