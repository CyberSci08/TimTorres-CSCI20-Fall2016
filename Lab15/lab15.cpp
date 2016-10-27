//Tim Torres
//CSCI20 MW 9:00-11:15
//Lab 15: Single Dimension Array, creating a menu for the user to interact with
//I used sources from StackFlow, YouTube and cplusplus.com and zybooks

#include <iostream>
#include <string>
using namespace std;

//Global constant variable for array
const int NUM_ITEMS = 10;
const string menuItem[NUM_ITEMS] = {"Swords", "Breastplates", "Leggings", "Shields", "Rings",
                                   "Braces", "Axes", "Clubs", "Helmets", "Talismans"};
                                   
 
 void printItems(int userItems[NUM_ITEMS]);
 void printMenu();
 bool selectItem(int userItems[NUM_ITEMS]);
  


int main(){
    
    bool udone = false;                               
    int i = 0;
    int userItems[NUM_ITEMS] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};      //Initialized inventory for userItems
    
    cout << "Welcome to the shop!" << endl;
    cout << endl;
   
   //Loop to continue making purchases until user decides 
   while (udone == false){
    //Function calls
    printMenu();
    
    printItems(userItems);
    
    udone = selectItem(userItems);
    
    cout << endl;
    
   } 
    
    
   return 0;
}

//Items the user has
void printItems(int userItems[NUM_ITEMS]){
    cout << "Your items are: " << endl;
    
    for (int i = 0; i < NUM_ITEMS; ++i){
        if (userItems[i] > 0){
            cout << userItems[i] << " x " << menuItem[i] << endl;
        }
    }
    cout << endl;
}

//Items in the shop menu
void printMenu(){
    cout << "Shop Items" << endl;
    for (int i = 0; i < NUM_ITEMS; ++i){
        cout << i + 1 << ". " << menuItem[i] << endl;
    }
    cout << endl;
}

//User selects items
bool selectItem(int userItems[NUM_ITEMS]){        //A bool function because it determines what the function returns
    int userIn;
    cout << "What would you like to purchase from the menu?" << endl;
    cout << "Enter " << 1 << "-" << NUM_ITEMS << endl;
    cout << "Enter -1 to quit" << endl;
    cin >> userIn;
    
    if (userIn == -1){
        return true;       //The program will stop
    }
    
    if (userIn < 0 || userIn > NUM_ITEMS){
        cout << "Error, repeat." << endl;
        return false;                   //Program keeps running
    }
    userItems[userIn - 1]++;
    
        return false;        //Non void functions need return values source YouTube
}