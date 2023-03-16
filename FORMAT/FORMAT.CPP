#include <iostream.h>
#include <iomanip.h> //header for ios object

void main() {
   float test = 15.5; //goal: format this as a currency, two decimal places

   cout << test << endl;     //basic, unformatted output

   cout << setiosflags(ios::fixed)      //formats to non-exponant
	<< setiosflags(ios::showpoint)  //always display decimal point
	<< setprecision(2)              //how many decimal places displayed
	<< test << endl;                //value and \n character
}