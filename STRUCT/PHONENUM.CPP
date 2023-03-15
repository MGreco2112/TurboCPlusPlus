#include <iostream.h>

struct phone {
  int area;
  int exchange;
  long number;


};

void main() {
   phone phone1 = {401, 400, 9473};
   phone phone2;

   cout << "Enter your area code, exchange, and number (separated by spaces): ";
   cin >> phone2.area >> phone2.exchange >> phone2.number;

   cout << endl << "My phone number is (" << phone1.area << ") "
	<< phone1.exchange << "-" << phone1.number << endl
	<< "Your phone number is (" << phone2.area << ") "
	<< phone2.exchange << "-" << phone2.number << endl;


}