#include <iostream>
#include <string>
using namespace std;


class Person {
  public:
  string name;
  int age;
  Person (string, int);
};

int main (int argc, char *argv[]) {
  cout << "Hello world";
  return 0;
}



Person::Person (string name , int age): name(name), age(age) { }
