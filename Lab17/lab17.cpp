//Tim Torres
//CSCI20 MW 9:00-11:15
//Lab 17: Creating usernames with c strings and character modifications

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main(){
   
   const int fMax = 10;
   const int lMax = 20;
   char fName[fMax];
   char lName[lMax];
   int choice = 0;
   
   //User enters first and last name
   
   cout << "Enter first name." << endl;
   cin >> fName;
   cout << "Enter last name." << endl;
   cin >> lName;
  
   //Check conditions for character limit and same name
   
   if (fName[fMax] > 10){
      cout << "Name exceeds character limit." << endl;
      cout << "Enter first name." << endl;
      cin >> fName;
   } if (lName[lMax] > 20){
      cout << "Name exceeds character limit." << endl;
      cout << "Enter last name." << endl;
      cin >> lName;
   } if (strcmp(fName, lName) == 0){
      cout << "Warning! First and last name are the same." << endl;
   }
   
   //User chooses from the three a username
   
    cout << "Please choose a username from the three." << endl;
    cout << endl;
    
    //Option 1
    
    char orgName[10] = "  browne";
    char userIn[10] = "ap";
    
    for (int i = 0; i < 1; ++i){
       strncpy(orgName, userIn, 2);
       cout << "1) " << orgName;
       
    }
    
    cout << endl;
    
    //Option 2 
    
    for (int i = 0; i < 1; ++i){
       if (fName[0] == 'A'){
          fName[0] = 'a';
       }if (lName[0] == 'B'){
          lName[0] = 'b';
       }
    }
      
    cout << "2) " << fName << lName << endl;
    
    //Option 3
    
    char userIn_[10] = "a";
    char orgName_[10] = " browne";
    
    for (int i = 0; i < 1; ++i){
       strncpy(orgName_, userIn_, 1);
       cout << "3) " << orgName_ << endl;
    }
}