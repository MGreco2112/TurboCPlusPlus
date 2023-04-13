//accessing the variable pointed to
#include <iostream.h> //for cout function

void main() { //define main function

   int var1 = 11; //initialize two int variables with arbitrary values
   int var2 = 22;

   int* ptr;  define int pointer variable ptr

   ptr = &var1; //assign address of var1 to ptr
   cout << *ptr << endl; //cout the value of the variable held at address ptr

   ptr = &var2; //assign address of var2 to ptr
   cout << *ptr << endl; //cout the value of the variable held at address ptr
}