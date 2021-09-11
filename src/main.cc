#include<iostream>
//#include "Person.hh"
#include "User.hh"

int main()
{
  /*Person* person{new Person(29, "Jesus", 1.80f, 100.f)};

  std::cout << person->name << std::endl;
  std::cout << person->age << std::endl;
  std::cout << person->height << std::endl;
  std::cout << person->weight << std::endl;*/

  User* user1{new User(29, "Jesus", 1.80f, 100.f)};

  std::cout << user1->GetName() << std::endl;
  std::cout << user1->GetAge() << std::endl;
  std::cout << user1->GetHeight() << std::endl;
  std::cout << user1->GetWeight() << std::endl;

  user1->SetAge(0);
  std::cout << user1->GetAge() << std::endl;

   delete user1;
  
  std::cin.get();
  return 0;
}