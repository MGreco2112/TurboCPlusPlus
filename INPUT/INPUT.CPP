#include<iostream.h>
#include<stdlib.h>

int main() {
   system("CLS");

   cout << "Enter a value for x and y:" << endl; /*Prompt user for input*/

   double x; /*declare vars for holding input*/
   double y;

   cin >> x >> y; /*take input using cin and character input stream operator*/

   cout << x + y << endl; /*print output*/

   return 0;
}