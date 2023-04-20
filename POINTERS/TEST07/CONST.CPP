//pointer constants and pointer variables
#include <iostream.h> //for cout function

void main() { //define main function
   int intarray[] = { 31, 54, 77, 52, 93 }; //initilize int array w/ 5 elements
   int* ptrint; //define int pointer variable
   ptrint = intarray; //assign intarray address to ptrint pointer var

   for (int i = 0; i < 5; i++) {  //iterate from 0 to 4
      cout << *(ptrint++) << endl; //print and increment element at address
   }
}