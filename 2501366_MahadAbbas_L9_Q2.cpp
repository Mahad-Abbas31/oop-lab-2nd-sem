/*Q2. Later they requested another functionality to be incorporated within the program:
o The car should have its owner detail (client) but if the car is gone or sold,
the client should remain. (Use Aggregation)
*/
#include <iostream>
using namespace std;

// ____ Client Class
class Client {
  public:
    string name;

    Client(string n) {
        name = n;
    }

    void display() {
        cout << "\nOwner: " << name << endl;
    }
};

// ____ Car Class
class Car {
    string model;
    Client *owner; // Aggregation (weak relationship)

  public:
    Car(string m, Client *c) {
        model = m;
        owner = c;
    }

    void display() {
        cout << "\nCar Model: " << model;
        owner->display();
    }
};

// ____ Main Function
int main() {
    Client c1("Ahmad");

    Car car1("Civic", &c1);
    car1.display();

    // Car destroyed, but client still exists
    cout << "\nClient still exists: ";
    c1.display();
}