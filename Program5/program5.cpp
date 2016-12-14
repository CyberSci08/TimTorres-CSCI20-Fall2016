/*Tim Torres
CSCI20 MW 9:00-11:15 AM
Final Project: Money Conversion program. Take in x amount of dollars, ask the user
which type of currency they wish to convert to.*/

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
using namespace std;

#include "program5.h"

  //Main Function where input and output will be displayed, and main code
  
     int main(){
         
         const int NOC = 7;
         string currency[NOC];
         MonConv money;
         double userMon;
         int mon1 = 0;         //Which conversions the user wants
         char mon3 = 'Y';
         int j = 0;
         
        //Array of currency conversions
         currency[0] = "1. European Euros";
         currency[1] = "2. Japanese Yen";
         currency[2] = "3. Mexican Pesos";
         currency[3] = "4. British Pound";
         currency[4] = "5. Russian Ruble";
         currency[5] = "6. Swedish Krona";
         currency[6] = "7. Bitcoin digital currency";
         
         //Loop until user decides not to continue
       while (mon3 == 'y' || mon3 == 'Y'){
           
        //Ask user how much money they wish to convert, and setting the value
         
         cout << "How much money would you like to convert?" << endl;
         cin >> userMon;
         money.SetUSDoll(userMon);
         cout << endl;
           
         //Displaying array for user
        cout << "Displaying currency list..." << endl;
        cout << endl;
         for (j = 0; j < NOC; j++){
            cout << currency[j] << endl;
        }
        cout << endl;
        
        //Ask user which conversion they would like
        cout << "Choose from the list of currencies you would like to convert to." << endl;
        cin >> mon1;
            
            //Check condition to see which the user chose
          if (mon1 == 1){
              cout << "Converting to Euros..." << endl;
              cout << "Money has been converted your total is now: € ";
              cout << fixed << setprecision(2) << money.GetEuro() << "." << endl;
          }
          else if (mon1 == 2){
              cout << "Converting to Yen..." << endl;
              cout << "Money has been converted your total is now: ¥ ";
              cout << fixed << setprecision(2) << money.GetYen() << "." << endl;
          }
          else if (mon1 == 3){
              cout << "Converting to Pesos..." << endl;
              cout << "Money has been converted your total is now: $ ";
              cout << fixed << setprecision(2) << money.GetPesos() << "." << endl;
          }
          else if (mon1 == 4){
              cout << "Converting to Pound..." << endl;
              cout << "Money has been converted your total is now: £ ";
              cout << fixed << setprecision(2) <<money.GetPound() << "." << endl;
          }
          else if (mon1 == 5){
              cout << "Converting to Ruble..." << endl;
              cout << "Money has been converted your total is now: ₽ ";
              cout << fixed << setprecision(2) << money.GetRuble() << "." << endl;
          }
          else if (mon1 == 6){
              cout << "Converting to Krona..." << endl;
              cout << "Money has been converted your total is now: kr ";
              cout << fixed << setprecision(2) <<money.GetKrona() << "." << endl;
          }
          else {
              cout << "Converting to Bitcoin..." << endl;
              cout << "Money has been converted your total is now: Ƀ ";
              cout << fixed << setprecision(4) << money.GetBitcoin() << "." << endl;
          }
          
          //Prompt the user if they would like to continue
            cout << "If you would like to continue, enter y for yes, otherwise ";
            cout << "press n to quit." << endl;
            cout << "Would you like another conversion?" << endl;
            cin >> mon3;
         
       }
       
         return 0;
     }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  