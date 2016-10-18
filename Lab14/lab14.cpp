//Tim Torres
//CSCI20 MW 9:00-11:15
//Lab 14: Checking a letter case (Fixed program)

#include <iostream>
using namespace std;

int main(){
    //Initializing variables
    char ch;
    
    //Asking user for character input
    cout << "Please enter a character:" << endl;
    cin >> ch;
    
    //Checking if user entered an uppercase letter.
    
    if (ch >= 'A' && ch <= 'Z'){
        cout << "Yes, that is a uppercase letter." << endl;
        
    //Checking if user entered an lowercase letter.
    
    }else if (ch >= 'a' && ch <= 'z'){
        cout << "Yes, that is a lowercase letter." << endl;
        
    //If user didn't enter a letter this code will execute.
    
    }else{
        cout << "That is not a letter." << endl;
    }
    
     return 0;

}

/*I ran the program from the assignment folder and the if branches didn't have the right 
condition statements to properly execute the code. I changed it to a if else statement with
a nested else-if. It seemed easier from what the previous code was. I changed the if condition so that
it would check characters between uppercase A and Z, while the nested else-if checked to see if it was
between lowercase a and z. The if statements before were useful, but as I was configuring with it, it kept
on displaying not a letter and I was getting confused. As I made mistakes I would fix one line of code at a time,
so that I wouldn't confuse myself. I think debugging is important because it teaches programmers how to solve problems 
on their own. Debugging other people's code may make problem solving skills better, and understanding how others think
logically.*/