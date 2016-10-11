//Tim Torres
//CSCI20 MW 9:00-11:15
//Lab 12: Creating getting to know me flowchart

#include <iostream>
using namespace std;

int main(){
    
   int uName;
   char userName[50];
   
   cout << "Enter name" << endl;
   cin >> userName;

   cout << "What year were you born in?" << endl;
   cin >> uName;
   
   if (uName < 1960){
       cout << "Classic cars were great back then." << endl;
       
   }if(uName < 1979){
       switch (uName){
           case 1970:
           
           
           case 1971:
           case 1972:
           case 1975:
           
           
           default:
           cout << "Had some good music in that period." << endl;
           break;
       }
   }if(uName < 1989){
       switch(uName){
           case 1980:
           default:
           cout << "Good movies during the 80's." << endl;
           break;
           
       }
       
   } if(uName < 1999){
       switch(uName){
           case 1990:
           cout << "Growing up during these years were great!" << endl;
           break;
           default:
           cout << "Remember the dial up internet sound." << endl;
           break;
       }
   }
       
   cout << userName << " " << uName << endl;
   
    
}