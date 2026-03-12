/*2.Your team is creating a game ludo. You are working on player class. It contains the following
information.
- Current position of player (between 1 to 100)
- Player alive pawns (Gooti)
- Does the player have its turn now or not.
Player data can be initialized via constructor and via one setter function. Player data
(attributes) can be fetched using getter() function but with the conformation that via getting
data player data cant be changed or updated. (user constant functions)
*/
#include <iostream>

using namespace std;

class Player{
private:
    int position;
    int pawns;
    bool turn;

public:
    // ___ Constructor
    Player(int p,int g,bool t){
        position=p;
        pawns=g;
        turn=t;
    }

    // ___ Single Setter Function
    void setData(int p,int g,bool t){
        position=p;
        pawns=g;
        turn=t;
    }

    // ___ Const Getter Functions
    int getPosition() const{    return position;    }
    int getPawns() const{    return pawns;    }
    bool getTurn() const{    return turn;    }

    // ___ Const Display Data
    void show() const{    
        cout<<position<<" "<<pawns<<" "<<turn<<endl;    
    }
};

int main(){
    Player p1(1,4,true);

    p1.show();
    p1.setData(10,3,false);
    p1.show();
}