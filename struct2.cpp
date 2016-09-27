#include <iostream>
#include <string>



using std::cout;
using std::endl;
using std::cin;
using std::string;

struct doc_record {

  string name;
  int age;
  float weight;

};

int main() {
  doc_record person;
  cout << "Enter name: ";
  cin >> person.name;
  cout<< "Enter age: ";
  cin >> person.age;
  cout<< "Enter weight: ";
  cin >> person.weight;

  cout << "Patient Information: "<<endl;
  cout << person.name <<endl;
  cout << person.age <<endl;
  cout << person.weight<<endl;

  return 0;
}
