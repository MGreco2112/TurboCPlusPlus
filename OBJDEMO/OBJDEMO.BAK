#include <iostream.h>
#include <stdlib.h>

class Employee {  /*declare user created Class*/
 private:         /*declare access modifier for fields (private by default)*/
   char *Name;
   char *Company;
   int Age;

 public:          /*change access level for methods (optional)*/
   Employee(char *name, char *company, int age) { /*constructor method*/
     Name = name;
     Company = company;
     Age = age;
   }

   void IntroduceYourself() {
     cout << "Name: " << Name << endl;
     cout << "Company: " << Company << endl;
     cout << "Age: " << Age << endl;
   }
   char *getName()  {
     return Name;
   }
   void setName(char *name) {
     Name = name;
   }
   char *getCompany() {
     return Company;
   }
   void setCompany(char *company) {
     Company = company;
   }
   int getAge() {
     return Age;
   }
   void setAge(int age) {
     Age = age;
   }
};

int main() {
  /*instantiate object within main function*/
  Employee employee1 = Employee("Mads", "Dreaded 9th", 27);


  employee1.IntroduceYourself(); /*call method from instant. object*/
  employee1.setName("Alex"); /*call setter method, include new value*/
  cout << employee1.getName(); /*print updated value thru getter method*/

  return 0;
}