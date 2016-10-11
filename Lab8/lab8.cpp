//Tim Torres
//CSCI20 MW 9:00-11:15
//Lab 8: Creating a program that converts pounds to kilograms,
//and kilograms to pounds.


#include <iostream>
#include <string>
using namespace std;

//Creating function to convert kilogram to pound. 1 kg = 2.20462 lb.

void ToPound(double kiloGram, double pound = 2.20462){                  
    
    cout << "You entered: " << kiloGram << " kilogram(s)." << endl;
    pound = 2.20462;
    pound = kiloGram * pound;
    cout << kiloGram << " kilogram(s), " << " is equivalent to ";         //Output of kilogram to pound conversion
    cout << pound << " pound(s)." << endl;
    
    
    return;
}

//Create function to convert pound to kilogram.

void ToKilo(double userPound, double kiloGram = 0, double pound = 2.20462){    
    
    cout << "You entered: " << userPound << " pound(s)." << endl;
    pound = 2.20462;
    kiloGram = userPound / pound;
    cout << userPound << " pound(s), " << " is equivalent to ";             //Output of pound to kilogram conversion
    cout << kiloGram << " kilogram(s)." << endl;
    
    return;
}

//Main function that has function calls and input.

int main(){
    
    double kiloGram;                                     //Variables used for functions
    double userPound;                                    
    
    cout << "Enter number of kilograms." << endl;         //User input for kilograms
    cin >> kiloGram;
    ToPound(kiloGram);                                   //Function call to kilogram to pound conversion
    
    cout << "Enter number of pounds." << endl;           //User input for pounds
    cin >> userPound;
    ToKilo(userPound);                                  //Function call to pound to kilogram conversion
    
}