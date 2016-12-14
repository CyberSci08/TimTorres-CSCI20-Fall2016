/*Tim Torres
CSCI20 MW 9:00-11:15 AM
Final Project: Money Conversion program. Take in x amount of dollars, ask the user
which type of currency they wish to convert to.*/

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
using namespace std;


//Global Const variables that represent currency types

const double euro1 = 0.94660;
const double yen1 = 115.27;
const double pesos1 = 20.24;
const double pound1 = .79;
const double ruble1 = 60.74;
const double krona1 = 9.15;
const double bitcoin1 = .0013;


  class MonConv{
      public:
      
      //Set user value of US dollar(s) (Mutator)
      
      void SetUSDoll(double doll);
      
      //(Accessor) Obtaining the value of conversion from US dollar(s)
      
      double GetUSDoll();         //US Dollar
      double GetEuro();           // Euros
      double GetYen();            //Japanese Yen
      double GetPesos();          //Mexican Pesos
      double GetPound();         //British Pound
      double GetRuble();          //Russian Ruble
      double GetKrona();             //Swedish Krona
      double GetBitcoin();            //Bitcoin (digital currency)
      
      //Member variables used throught the code
      
      private:
      double doll_ = 0.00;
      double euro_ = 0.00;
      double yen_ = 0.00;
      double pesos_ = 0.00;
      double pound_ = 0.00;
      double ruble_ = 0.00;
      double krona_ = 0.00;
      double bitcoin_ = 0.00;
  };
  
  //Function Definitions (Mutators and Accessors)
  
  void MonConv::SetUSDoll(double doll){
      doll_ = doll;
  }
  
  double MonConv::GetUSDoll(){
      return doll_;
  }
  
  double MonConv::GetEuro(){
      doll_ = doll_ * euro1;
      return doll_;
  }
  
  double MonConv::GetYen(){
      doll_ = doll_ * yen1;
      return doll_;
  }
  
  double MonConv::GetPesos(){
      doll_ = doll_ * pesos1;
      return doll_;
  }
  
  double MonConv::GetPound(){
      doll_ = doll_ * pound1;
      return doll_;
  }
  
  double MonConv::GetRuble(){
      doll_ = doll_ * ruble1;
      return doll_;
  }
  
  double MonConv::GetKrona(){
      doll_ = doll_ * krona1;
      return doll_;
  }
  
  double MonConv::GetBitcoin(){
      doll_ = doll_ * bitcoin1;
      return doll_;
  }
  
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
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  