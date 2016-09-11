//Tim Torres
//CSCI20 
//Lab 5 Monster Creator

#include <iostream>
#include <string>
using namespace std;

   struct MonsterStruct{
       
   string monHead;   
   string monEar;
   string monEye;
   string monNose;
   string monMouth;

  };

int main(){

   MonsterStruct head;
   string monst_Name;
   
   head.monHead = "Round";
   head.monEar = "Pointy";
   head.monEye = "Glowing";
   head.monNose = "Bull";
   head.monMouth = "Laughing";
  
   cout << "Enter your monster name." << endl;
   cin >> monst_Name;
   cout << endl;
   
   cout << "Monster name: " << monst_Name << endl;
   cout << "Head: " << head.monHead << endl;
   cout << "Eyes: " << head.monEye << endl;
   cout << "Ears: " << head.monEar << endl;
   cout << "Nose: " << head.monNose << endl;
   cout << "Mouth: " << head.monMouth << endl;
  
  

  
  
}