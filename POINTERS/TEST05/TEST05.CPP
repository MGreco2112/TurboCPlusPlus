//void pointer demo
#include <iostream.h> //for cout function

void main() {        //define main function
   int intVar;       //define int and float variables in memory
   float floatVar;

   int* ptrInt;     //define three pointer variables of type int, float
   float* ptrFlt;   //and void. Void can hold any datatype
   void* ptrVoid;

   ptrInt = &intVar;    //assign index of int and float vars to int and flt ptrs (to show no compile errors)
   ptrFlt = &floatVar;

   ptrVoid = &intVar;   //assign and print int index to void pointer
   cout << ptrVoid << endl;
   ptrVoid = &floatVar;    //assign and print float index to void pointer
   cout << ptrVoid << endl;

   //this highlights that the data type is irrelevant to the void pointer
}