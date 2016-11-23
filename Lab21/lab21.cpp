//Tim Torres
//CSCI20 MW 9:00-11:15
//Lab 21 Seperate Files compilation


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "MyClass.cpp"


MyClass::MyClass() : num_(0) {}

void MyClass::Output() {
  cout << "My number is: " << num_ << endl;
}


int randomNumber(){
   srand(time(0));
   return (rand()% 10 + 1);
}


int main() {
  // Create a MyClass Object
  MyClass object;
  // Call the output member function
  object.Output();
  // This ends our program
  return 0;
}