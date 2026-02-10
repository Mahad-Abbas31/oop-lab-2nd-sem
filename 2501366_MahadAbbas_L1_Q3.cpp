#include <iostream>
#include <string>

using namespace std;

//____ Class ____
class Car{
private:
    int yearModel;
    string company;
    int speed;

public:
    //____ Methods ____
    
    //____ Mutator/Setter Function
    void setCar(int y, string c, int s){
        yearModel = y;
        company = c;
        speed = s;
    }

    //____ Accessor/Getter Functions
    int getModel(){    return yearModel;    }
    string getCompany(){    return company;    }
    int getSpeed(){    return speed;    }

    //____ Accelerate Function
    void accelerate(){    speed = speed + 5;    }
    
    //____ Brake Function
    void brake(){    speed = speed - 5;    }
};

int main(){
    Car c;
    c.setCar(2024, "HONDA", 50);

    cout << "Your Car is " << c.getCompany() << " ," << c.getModel() << endl;

    cout << "\nThe Car is Running at " << c.getSpeed() << endl;
    cout << "\nLet's Accelerate the Car.......\n";

    for (int i=1; i<=5; i++){
        c.accelerate();
        cout << "Speed after " << i << " Accelerations: " << c.getSpeed() << " km/hr\n";
    }

    cout << "\nThe Car is Running at " << c.getSpeed() << endl;
    cout << "\nNow Let's Slow Down the Car.......\n";

    for (int i=1; i<=5; i++){
        c.brake();
        cout << "Speed after " << i << " Brakes: " << c.getSpeed() << " km/hr\n";
    }
}