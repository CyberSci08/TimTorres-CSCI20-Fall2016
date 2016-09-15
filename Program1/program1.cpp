//Tim Torres
//Program 1: Variables
//Calculating a person's weekly wages
//9-12-16

#include <iostream>
#include <string>
using namespace std;

int main(){

   string userName1;
   string userName2;
   int wageHour   = 0;
   float wageRate = 0.0;
   float grossPay = 0.0;
   float netPay   = 0.0;
   float wageTax  = 0.17;
   float wageFee  = 0.0;
   
   cout << "Please enter your first name." << endl;
   cin >> userName1;
   cout << endl;
   cout << "Please enter your last name." << endl;
   cin >> userName2;
   cout << endl;
   
   cout << "How many hours did you work this week?" << endl;
   cin >> wageHour;
   
   cout << "How much do you get paid an hour?" << endl;
   cin >> wageRate;
   
   cout << endl;
   
   grossPay = (wageHour * wageRate) * 5;
   
   wageFee = (grossPay * wageTax);
   
   netPay = (grossPay - wageFee);
   
   cout << "Wage Slip" << endl;
   cout << "Name: " << userName1 << " " << userName2 << endl;
   cout << "Hours worked: " << wageHour << endl;
   cout << "Hourly pay rate: $" << wageRate << endl;
   cout << "Gross Pay: $" << grossPay << endl;
   cout << "Taxes owed: $" << wageFee << endl;
   cout << "Net Pay: $" << netPay << endl;
   
   
       
   }