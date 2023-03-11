#include<iostream.h>
#include<stdlib.h>

int main() {
   system("CLS");

   cout << "Enter a temp in F:" << endl;

   double tempF;
   double conversion = 5.0/9.0;

   cin >> tempF;

   double tempC = (tempF - 32) * conversion;

   cout << "Temp in C: " << tempC;



   return 0;
}