#include<iostream.h>
#include<stdlib.h>

int main() {
  system("CLS");

  float sales = 95000;

  const float stateTaxRate = 4.0 / 100.0;
  const float countyTaxRate = 2.0 / 100.0;

  float adjustedState = sales * stateTaxRate;
  float adjustedCounty = sales * countyTaxRate;

  float totalTax = (stateTaxRate + countyTaxRate) * sales;
  float remainingEarnings = sales - totalTax;

  cout << "Sales: $" << sales << "\n"
       << "State Tax Due: $" << adjustedState << "\n"
       << "County Tax Due: $" << adjustedCounty << "\n"
       << "Total Tax Due: $" << totalTax << "\n"
       << "Remaining Earnings: $" << remainingEarnings << endl;




  return 0;
}