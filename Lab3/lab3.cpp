//Tim Torres
//Lab 3 Coinstar
//8-31-16

#include <iostream>
using namespace std;

int main(){
    
    int myMoney  = 0;
    //int change   = 0;
    int quarters = 0;
    int dimes    = 0;
    int nickels  = 0;
    int pennies  = 0;
    float totalMoney = 0;
    
    cout << "Hello welcome to Coinstar, please enter your change." << endl;
    cin >> myMoney;
    
    cout << "You entered: " << myMoney << " cents." << endl;
    
    quarters = (myMoney / 25);
    myMoney  = (myMoney % 25);
    
    dimes = (myMoney / 10);
    myMoney = (myMoney % 10);
    
    nickels = (myMoney / 5);
    myMoney = (myMoney % 5);
    
    pennies = (myMoney / 1);
    myMoney = (myMoney % 1);
    
    cout << "That's: " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels and " << pennies << " pennies."<< endl;
    
    totalMoney = (quarters + dimes + nickels + pennies) * (.109);
    cout << "Your total after fees: $" << totalMoney << endl;
    
    
    
}