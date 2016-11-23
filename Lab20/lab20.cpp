//Tim Torres
//CSCI20 MW 9:00-11:15
//Lab 20: Commenting on code provided

#include <iostream>              //Header files: iostream includes input and output along with other useful functions for programming
#include <cstring>               //C-String library includes character string operators
using namespace std;            // Allows us to use cout without having to type std:: all the time


//Main function where the code will be runned from

int main(){
    
    char firststr[10];            //initializing a char array with 10 elements
    int firstname = 0;             //initializing a variable firstname of type int and setting it to 0
    char *head = firststr;      //gets the data from the array firststr
    char *tail = firststr;        //gets the data from the array firststr
    
    
    //Output for the user, also input from the user
    cout << "Please enter a 10 letter word or less" << endl;
    cin >> firststr;
    
    //Using c-string function strlen to get the string length of firststr
    strlen(firststr);
    
    //Assinging the string length of firststr to firstname
    firstname = strlen(firststr);
    
    //Displaying user's word
    cout << "Your word is " << firststr << endl;
    
    //Check conditions for string length
    if (firstname < 10){
        
        
        //Loop to check user's input, if user enters nothing the loop stops. The pointer is checking to see if the user inputs is empty
         while (*head != '\0'){
             
             //Allows the program to access the value pointed to by the pointer head
             cout << *head;
             head++;             //incrementing heads by 1
         }// loop ends
                                
    }
    //If firstname is bigger than 10 characters then the else statement runs
    else {
        
         cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
    }
      cout << endl;
      
      tail = &firststr[strlen(firststr) - 1];   //getting the string length of firststr then subtracting 1, returns pointer to variable and assigns it to tail
      
      //Another condition check
        if (firstname < 10){
            
            //Another loop to check if user input is greater than 0
            while (*tail > 0){
                
                //allows the program to access the value pointed to by the pointer tail
                cout << *tail;
                tail--;           //decrement tails by 1
            }
            
        }
        
        cout << endl;
        
        //assign firststr to head
        head = firststr;
        
        //getting char length of firststr, subtracting 1 from the length, returns pointer to variable and assigns it to tail
        tail = &firststr[strlen(firststr) - 1];
        
        //incrementing head by 1 (increase)
        head++;
        
        //decrementing tail by 1 (decrease)
        tail--;
        
             //check condition to whether pointer variables are equal to each other or not. Output to user whether true or not
                if (*head == *tail){
                    
                    cout << "It is an palindrome!" << endl;
                }
                
                  else{ 
                    
                  cout << "It is not an palindrome" << endl;
                }
 
                return 0;
    
    
    
}