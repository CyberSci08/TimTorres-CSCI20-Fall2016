//Tim Torres
//CSCI20 MW 9:00-11:15
//Lab 16: Parallel Arrays: Using menu program from lab 15 to output prices and inventory

#include <iostream>
#include <string>
using namespace std;

//Global constant variable for array
const int NUM_ITEMS = 10;
const string menuItem[NUM_ITEMS] = {"Swords", "Breastplates", "Leggings", "Shields", "Rings",
                                   "Braces", "Axes", "Clubs", "Helmets", "Talismans"};

const float menuPrice[NUM_ITEMS] = {100.00, 75.00, 50.00, 85.00, 65.00, 50.00, 100.00, 95.00, 100.00, 25.00};       //Money representing each item
                                 
 
 void printItems(int userItems[NUM_ITEMS]);
 void printMenu();
 bool selectItem(int userItems[NUM_ITEMS]);
 double printTotal(int userItems[NUM_ITEMS]);

int main(){
    
    bool udone = false;                               
    int i = 0;
    int userItems[NUM_ITEMS] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};      //Initialized inventory for userItems
    cout << "Welcome to the shop!" << endl;
    cout << endl;
   
   //Loop to continue making purchases until user decides to quit
   while (udone == false){
       
    //Function calls
    printMenu();
    
    printItems(userItems);
    
    
    udone = selectItem(userItems);
    
    cout << endl;
    
   } 
    
    
   return 0;
}
//Print total of players inventory
double printTotal(int userItems[NUM_ITEMS]){
    
}



//Items the user has
void printItems(int userItems[NUM_ITEMS]){
    float menuSum = 0.0;                        //create sum variable to keep record of user purchased items
    cout << "Your items are: " << endl;
    for (int i = 0; i < NUM_ITEMS; ++i){
        
        if (userItems[i] > 0){
            cout << userItems[i] << " x " << menuItem[i] << endl;
            menuSum += menuPrice[i];
            
            
        }
        
    }
    cout << "Your total is: $ " << menuSum << endl;
    cout << endl;
}

//Items in the shop menu
void printMenu(){
    cout << "Shop Items" << endl;
    cout << endl;
    for (int i = 0; i < NUM_ITEMS; ++i){
        cout << i + 1 << ". " << menuItem[i] << "---$ " << menuPrice[i] << endl;
    }
    cout << endl;
    
}

//User selects items from menu
bool selectItem(int userItems[NUM_ITEMS]){        //A bool function because it returns true or false condition
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
