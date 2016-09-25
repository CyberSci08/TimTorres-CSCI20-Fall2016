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
    cout << kiloGram << " kilogram(s), " << " is equivalent to ";
    cout << pound << " pound(s)." << endl;
    
    
    return;
    cout << endl;
}



//Create function to convert pound to kilogram.

void ToKilo(double userPound, double kiloGram = 0, double pound = 2.20462){
    
    cout << "You entered: " << userPound << " pound(s)." << endl;
    pound = 2.20462;
    kiloGram = userPound / pound;
    cout << userPound << " pound(s), " << " is equivalent to ";
    cout << kiloGram << " kilogram(s)." << endl;
    
    return;
}

//Main function that has function calls and output

int main(){
    
    double kiloGram;
    double userPound;
    
    cout << "Enter number of kilograms." << endl;
    cin >> kiloGram;
    ToPound(kiloGram);
    
    cout << "Enter number of pounds." << endl;
    cin >> userPound;
    ToKilo(userPound);
    
}