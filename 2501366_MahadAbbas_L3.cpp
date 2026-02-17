#include<iostream>

using namespace std;

class Math{
    int square;

public:    
    inline void setsquare(int s){    square = s;    }
    inline int getsquare(){    return square;    }
    inline int calculateSquare(){    return square*square;    }
};

int main(){
    Math m;
    int s;
    cout << "Enter a Number to Calculate Square: ";
    cin >> s;
    m.setsquare(s);
    cout << m.getsquare() << endl
         << m.calculateSquare();
}