//Tim Torres
//CSCI20 9:00-11:15
//Lab 18: Creating usernames using only string tools

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;


int main(){
   
   string fName;
   string lName;
   string userFirst = "April";
   string userLast = "Browne";
   
   cout << "Enter first name." << endl;
   getline (cin, fName);
   cout << "Enter last name." << endl;
   getline (cin, lName);
   
   
   //Checking character limit size for user name
   
   if (fName.size() > 10){
      cout << "First name exceeds max character limit." << endl;
   }if (lName.size() > 20){
      cout << "Last name exceeds max character limit." << endl;
   }if (fName == lName){
      cout << "Warning! First and last names are the same." << endl;
   }
   cout << endl;
   cout << "Choose your username from the list below: " << endl;
   
   //Option 1 for username
   userFirst.at(0) = 'a';
   userFirst.at(1) = 'p';
   userFirst.at(2) = '\0';
   userFirst.at(3) = '\0';
   userFirst.at(4) = '\0';
   userLast.at(0) = 'b';
   
   cout << "1) " << userFirst << userLast << endl;
   
   //Option 2 for username
   
   userFirst = "April";
   userLast = "Browne";
   
   userFirst.at(0) = 'a';
   userLast.at(0) = 'b';
   
   cout << "2) " << userFirst << userLast << endl;
   
   //Option 3 for username
   
   userFirst = "April";
   userLast = "Browne";
   
   userFirst.at(0) = 'a';
   userFirst.at(1) = '\0';
   userFirst.at(2) = '\0';
   userFirst.at(3) = '\0';
   userFirst.at(4) = '\0';
   userLast.at(0) = 'b';
   
   cout << "3) " << userFirst << userLast << endl;
   
   
}