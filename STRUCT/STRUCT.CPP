#include <iostream.h>

struct User { //declare basic struct
   long id;
   float data;  //assign attributes to struct

}; //terminate with semicolon, IMPORTANT!!!

void main() { //declare main method
   User newUser = {1, 3.14159}; //initilize struct var with curly braces
				//elements entered into braces are top to bottom in struct, left to right in braces
   cout << newUser.id << ", " << newUser.data << endl;



}