//Tim Torres
//CSCI20 MW 9:00-11:15
/*Program 3: Creating a Rock, Paper and Scissors class to play with the user.
Notes: Some variables and function definitions were not used in this program. I 
thought I had to have so many, but as I got the hang of it they became useless.
They are there for reference, and maybe change.*/

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//Rock, Paper, Scissors game class

   class RPSGame{
       public:
       //Default constructor
       RPSGame();
       
       //Mutator Functions
         void SetPlyrHand(int plyr1);
         void SetCompHand(int comp1);
         void SetGameStart(int roundNum, int plyr1, int comp1);
      //Accessor Functions
         int GetPlyrHand() const;
         int GetCompHand() const;
         int GetGameResults() const;

private:
//Member variables
    int plyrIn_;
    int compIn_;
    int RoundWon_;
    int roundNum_;


};

//Function Definitions

RPSGame::RPSGame(){
plyrIn_ = 0;
compIn_ = 0;
RoundWon_ = 0;
roundNum_ = 0;
}

//Mutators
void RPSGame::SetPlyrHand(int plyr1){
   plyrIn_ = plyr1;
}
void RPSGame::SetCompHand(int comp1){
   compIn_ = comp1;
}

//This is where the Game Begins. The correct variables are assigned and conditions are set

void RPSGame::SetGameStart(int roundNum, int plyr1, int comp1){
   compIn_ = comp1;
   plyrIn_ = plyr1;
   roundNum_ = roundNum;

   //Random computer choice between 1 and 3
   compIn_ = (rand() % 3) + 1;
   
    //Comparing player and computer results
    
   if(plyrIn_ == 1 && compIn_ == 1){
    cout << "You chose rock, computer chose rock. Tie game!" << endl;
    }else if (plyrIn_ == 1 && compIn_ == 2){
    cout << "You chose rock, computer chose paper. Computer wins!" << endl;
    }else if (plyrIn_ == 1 && compIn_ == 3){
    cout << "You chose rock, computer chose scissors. You win!" << endl;
    RoundWon_++;
    }else if (plyrIn_ == 2 && compIn_ == 1){
    cout << "You chose paper, computer chose rock. You win!" << endl;
    RoundWon_++;
    }else if (plyrIn_ == 2 && compIn_ == 2){
    cout << "You chose paper, computer chose paper. Tie game!" << endl;
    }else if (plyrIn_ == 2 && compIn_ == 3){
    cout << "You chose paper, computer chose scissors. Computer wins!" << endl;
    }else if (plyrIn_ == 3 && compIn_ == 1){
    cout << "You chose scissors, computer chose rock. Computer wins!" << endl;
    }else if (plyrIn_ == 3 && compIn_ == 2){
    cout << "You chose scissors, computer chose paper. You win!" << endl;
    RoundWon_++;
    }else if(plyrIn_ == 3 && compIn_ == 3){
    cout << "You chose scissors, computer chose scissors. Tie game!" << endl;
    }
    
  
    cout << "You won this many times: " << RoundWon_ << endl;
    return;
}

//Accessors

int RPSGame::GetGameResults() const{
  
  //To determine who won out of # of rounds played
  
   if (RoundWon_ == 2 && roundNum_ == 3){
    cout << "You won 2 games out of 3, you are the winner!" << endl;
    
   }else if (RoundWon_ == 3 && roundNum_ == 5){
   cout << "You won 3 games out of 5, you are the winner!" << endl;
   
   }else if (RoundWon_ == 4 && roundNum_ == 7){
   cout << "You won 4 games out of 7, you are the winner!" << endl;
   
   }else{
   cout << "Please try again next time!" << endl;
   
   }
   return RoundWon_;
}


   int main(){
    
    //Object variables
     RPSGame plyrCh1;
     RPSGame compCh1;
     RPSGame numRound;
     
     //These are just variables I used througout my code that kept me on tract with what I was doing
     //Some variables I initialized but didn't use them at all
     
     int counter = 0;
     int roundNum = 0;
     int plyr1;
     int comp1;
     
     cout << "How many rounds of Rock Paper Scissors would you like to play?" << endl;
     cout << "3 rounds, 5 rounds, 7 rounds." << endl;
     cin >> roundNum;
     cout << endl;
     
     //Loop to determine the winner after so many rounds played
     for (counter = 1; counter <= roundNum; counter++){
         cout << "Choose: Rock = 1, Paper = 2, Scissors = 3" << endl;
         cin >> plyr1;
         cout << endl;
         numRound.SetGameStart(roundNum, plyr1, comp1);
         
     }
     
     cout << plyrCh1.GetGameResults() << endl;
      
}
