#include <iostream>
#include <string>
using namespace std;

void mySong(string songTitle, string songArtist){
    
    cout << songTitle << endl;
    cout << "By: " << songArtist << endl;
    cout << endl;
    
}
    
void mySongVerse1(string songV1, string songTitle){
    
    cout << songV1 << endl;
    cout << "When I was seventeen " << songTitle << endl;
    cout << songTitle << " for small town girls and soft summer nights" << endl;
    cout << "We'd hide from the lights on the village green" << endl;
    cout << "When I was seventeen" << endl;
    cout << endl;
    
}

void mySongChorus(string mySongChorus){
    
    cout << mySongChorus << endl;
    cout << endl;
}

void mySongVerse2(string songV2, string songTitle){
    
    cout << songV2 << endl;
    cout << "When I was twenty-one " << songTitle << endl;
    cout << songTitle << " for city girls that lived up the stair" << endl;
    cout << "With all that perfumed hair and it came undone" << endl;
    cout << "When I was twenty one" << endl;
    cout << endl;
}

void mySongVerse3(string songV3, string songTitle){
   
   cout << songV3 << endl; 
   cout << "Then I was thirty-five " << songTitle << endl;
   cout << songTitle << " for blue-blooded girls" << endl;
   cout << "Of independent means, we'd ride in limousines their chauffers would";
   cout << " drive" << endl;
   cout << "When I was thirty-five" << endl;
   cout << endl;
}

void mySongVerse4(string songV4, string songTitle){
    
   cout << songV4 << endl;
   cout << "But now the days grow short, I'm in the autumn of the year" << endl;
   cout << "And now I think of my life as vintage wine from fine old kegs" << endl;
   cout << "From the brim to the dregs, and it poured sweet and clear" << endl;
   cout << songTitle << endl;
   cout << endl;
}
   
int main(){
    
    mySong("It Was A Very Good Year", "Frank Sinatra");
    mySongVerse1("Verse One", "It Was A Very Good Year");
    mySongChorus("Brief Instrumental");
    mySongVerse2("Verse Two", "It Was A Very Good Year");
    mySongChorus("Brief Instrumental");
    mySongVerse3("Verse Three", "It Was A Very Good Year");
    mySongChorus("Brief Instrumental");
    mySongVerse4("Verse Four", "It Was A Very Good Year");
    mySongChorus("Brief Instrumental");
    
    return 0;
}