//Tim Torres
//Lab 4 Creating a madlib: An Odd Animal
//8-30-16
//Sources used: www.eduplace.com

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int num1 = 0;
    float num2 = 0;
    string M_upname;
    string prtverb;
    string clr1;
    string clr2;
    string bpart1;
    string bpart2;
    string ctry1;
    string ctry2;
    string Noun_one;
    string Noun_two;
    string Noun_three;
    string Favfood;
    string Favsong;
    string adj1;
    
    
    cout << "An Odd Animal." << endl;
    
    cout << "Give me a large whole number." << endl;
    cin >> num1;
    cout << "Another number, but not whole." << endl;
    cin >> num2;
    
    cout << "Name a present tense verb." << endl;
    cin >> prtverb;
    
    cout << "Can I have a made up name." << endl;
    cin >> M_upname;
    cout << "Pick a color." << endl;
    cin >> clr1;
    cout << "Pick another color." << endl;
    cin >> clr2;
    
    cout << "Type of body part. (plural)" << endl;
    cin >> bpart1;
    cout << "Another type of body part. (plural)" << endl;
    cin >> bpart2;
    
    cout << "Name a country." << endl;
    cin >> ctry1;
    cout << "Name another country." << endl;
    cin >> ctry2;
    
    cout << "Give me a noun. (singular)" << endl;
    cin >> Noun_one;
    cout << "Give me another noun. (plural)" << endl;
    cin >> Noun_two;
    cout << "And another noun. (plural)" << endl;
    cin >> Noun_three;
    
    cout << "Favorite food?" << endl;
    cin >> Favfood;
    cout << "Favorite song?" << endl;
    cin >> Favsong;
    
    cout << "Name an adjective." << endl;
    cin >> adj1;
    
    
    
    cout << endl;
    cout << " The " << M_upname << " is an animal that has " << clr1 << " hair with " << clr2 << " spots on its ";
    cout << bpart1 << " and " << bpart2 << "."; cout << " It's tail is shaped like a " << Noun_one;
    cout << " which it uses to " << prtverb << " " << Noun_two << "." << endl; cout << " An adult " << M_upname; 
    cout << " may weigh more than " << num2 << " pounds and stand over " << num1 << " feet high.";
    cout << " The " << M_upname << " can be found only in " << ctry1 << " and " << ctry2 << "." << endl;
    cout << " Although its favorite food is " << Favfood << "," << " it also likes to eat ";
    cout << Noun_three << "."; cout << " If you ever see a " << M_upname << ", be sure not to sing " << Favsong << "."; 
    cout << " That song makes it " << adj1 << "." << endl; cout << " Instead give it a few " << Favfood << " and be on your way." << endl;
    
    
}