//Tim Torres
//Lab 6 Intro to Functions: Creating a Copyright function
//CSCI20 MW 9:00-11:15

#include <iostream>
#include <string>
using namespace std;

void mySign(){
    
   char signPic1 = '_';
   char signPic2 = '~';
   char signPic3 = '/';
   char signPic4 = '\\';
   char signPic5 = 'T';
   string userName = "Tim Torres";
   
   
   cout << signPic3 << signPic2 << signPic3 << signPic5 << signPic4 << signPic2 << signPic4 << endl;
   cout << signPic4 << signPic2 << signPic4 << signPic1 << signPic3 << signPic2 << signPic3 << endl;
   cout << "       " << "Copyright " << userName << " 2016." << endl;
    
    return;
}


int main(){
    
    mySign();
    return 0;
    
}