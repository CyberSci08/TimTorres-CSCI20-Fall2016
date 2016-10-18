//Tim Torres
//CSCI20 MW 9:00-11:15
//Lab 13b: Using For Loop while looping time interval program.

#include <iostream>
using namespace std;

int main(){
    
   int sHour = 1300;             
   int eHour = 1400;             
   
   //printing out every minute between 1:00 pm and 2:59 pm using military standards
   for (sHour = 1300; sHour <= 1359; sHour++){
      cout << sHour << endl;
      
   }
   for (eHour = 1400; eHour <= 1459; eHour++){
      cout << eHour << endl;

   }
      //Initializing variables to default, so it allows user to enter values
      sHour = 0;
      eHour = 0;
     
      //Questions user for start and end time using military standards
      cout << "Enter starting military time" << endl;
      cin >> sHour;
      cout << "Enter ending military time" << endl;
      cin >> eHour;
      //Set condition for new input and print out time in 15 min intervals until end hour
      for (sHour; sHour < eHour; sHour += 15){
         cout << sHour << endl;
           
      }
      cout << sHour << endl;
      cout << eHour << endl;
}

   