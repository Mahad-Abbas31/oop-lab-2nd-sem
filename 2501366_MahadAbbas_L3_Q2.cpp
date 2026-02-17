/*
Write a class named Car that has the following member variables:
o yearModel. An int that holds the car’s year model.
o make . A string that holds the make of the car.
o speed . An int that holds the car’s current speed.
In addition, the class should have the following constructor and other member functions.
o Constructor: The constructor should accept the car’s year model and make
arguments. These values should be assigned to the object’s yearModel and make
member variables. The constructor should also assign 0 to the speed member
variables.
o Accessor: Appropriate accessor functions to get the values stored in an object’s
yearModel, make, and speed member variables.
o Accelerate: The accelerate function should add 5 to the speed member variable each
time it is called.
o Brake: The brake function should subtract 5 from the speed member variable each
time it is called.
Demonstrate the class in a program that creates a Car object, and then calls the accelerate
function five times. After each call to the accelerate function, get the current speed of the car
and display it. Then, call the brake function five times. After each call to the brake function,
get the current speed of the car and display it.
*/
#include <iostream>

using namespace std;

class Car {
    int yearModel;
    string make;
    int speed;

public:
    // ___ Parametric Constructor
    Car(int y, string m) {
        yearModel = y;
        make = m;
        speed = 0;
    }

    // ___ Getter Functions
    int getYearModel() {    return yearModel;    }

    string getMake() {    return make;    }

    int getSpeed() {    return speed;    }

    // ___ Accelerate
    void accelerate() {    speed = speed + 5;    }

    // ___ Brake
    void brake() {
        speed = speed - 5;
        if(speed < 0)
            speed = 0;
    }
};

int main() {
    Car c1(2023, "Honda");

    cout << "Accelerating...\n";
    for(int i = 0; i < 5; i++) {
        c1.accelerate();
        cout << "Speed: " << c1.getSpeed() << endl;
    }

    cout << "\nBraking...\n";
    for(int i = 0; i < 5; i++) {
        c1.brake();
        cout << "Speed: " << c1.getSpeed() << endl;
    }

    return 0;
}