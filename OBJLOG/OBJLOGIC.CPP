#include <iostream.h>
#include <stdlib.h>

class User {
private:
   double Id;
   char *Name;

public:
   User(double id, char *name) {
      Id = id;
      Name = name;
   }

   double getId() {
      return Id;
   }
   char *getName() {
      return Name;
   }
   void setName(char *name) {
      Name = name;
   }

   void toString() {
      cout << "Name: " << Name << ", ID: "<< Id << "\n";
   }
};

User createUser() {
   static double id = 0;
   char *name;

   cout << "Enter your name: ";
   cin >> name;

   id++;

   User newUser = User(id, name);

   return newUser;
}

int main() {
   int numOfUsers;

   cout << "How many Users do you want to create?" << "\n";
   cin >> numOfUsers;

   for (int i = 0; i < numOfUsers; i++) {
      User newUser = createUser();

      newUser.toString();
   }

   return 0;
}