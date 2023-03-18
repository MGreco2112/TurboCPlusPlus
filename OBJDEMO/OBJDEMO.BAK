#include <iostream.h>
#include <stdlib.h>

class Employee {  /*declare user created Class*/
 protected:         /*declare access modifier for fields (protected for inheritance)*/
   char *Name;
   char *Company;
   int Age;

 public:          /*change access level for methods (optional)*/
   Employee() {
     Name = "Default";
     Company = "Default";
     Age = 0;
   }
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

class Engineer : public Employee {
   public:
     Engineer(char *name, char *company, int age) : Employee(name, company, age) {
     }
     void getPosition() {
	cout << Name << " is an Engineer." << endl;
     }


};

int main() {
  system("CLS");
  /*instantiate object within main function*/
  Employee employee1 = Employee("Mads", "Dreaded 9th", 27);

  Engineer engineer1 = Engineer("Alex", "Dreaded 9th", 28);

  //engineer1.setName("Alex");
  //engineer1.setCompany("Dreaded 9th");
  //engineer1.setAge(28);

  employee1.IntroduceYourself(); /*call method from instant. object*/
  engineer1.IntroduceYourself();
  engineer1.getPosition(); //call method from derived class

  return 0;
}