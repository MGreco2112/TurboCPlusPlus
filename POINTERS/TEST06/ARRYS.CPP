//Pointers And Arrays

#include <iostream.h> //for cout function

//basic array iteration structure to print index elements
/*
void main() { //define main function
   int intarray[5] = { 31, 54, 77, 52, 93 }; //initilize int array of five indexes with five elements defined

   for (int i = 0; i < 5; i++) { //for loop from 0 to 4
      cout << intarray[i] << endl; //print element at index i of intarray
   }
}
*/
//using pointer system

void main() {
   int intarray[5] = { 31, 54, 77, 52, 93 };

   for (int i = 0; i < 5; i++) {
      cout << *(intarray+i) << endl;
      //this takes the address of the array and adds the value of i to it
      //the address of the array itself is the first element, adding to that index yeilds
      //subsequent elements within the array
   }
}