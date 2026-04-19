/*3. PakWheel required a system that manages their vehicles. Vehicles are of two types: Car and Truck.
For the Car extra feature is “Sitting Capacity” and for Truck it is Loading capacity in weight. Each
Vehicle contains clustered Vehicle Body Feature (Color, Type and Material). (Implement this problem
using hybrid inheritance). Use constructor for Initialization.
*/
#include <iostream>
using namespace std;

// ____ VehicleBody Class
class VehicleBody {
  protected:
    string color;
    string type;
    string material;

  public:
    VehicleBody(string c, string t, string m) {
        color = c;
        type = t;
        material = m;
    }
};

// ____ Vehicle Class from VehicleBody Class
class Vehicle : public VehicleBody {
  protected:
    string name;

  public:
    Vehicle(string c, string t, string m, string n)
    : VehicleBody(c, t, m) {
        name = n;
    }
};

// ____ Car Class from Vehicle Class
class Car : public Vehicle {
    int sittingCapacity;

  public:
    Car(string c, string t, string m, string n, int s)
    : Vehicle(c, t, m, n) {
        sittingCapacity = s;
    }

    void display() {
        cout << "\nCar: " << name;
        cout << "\nColor: " << color;
        cout << "\nSitting Capacity: " << sittingCapacity << endl;
    }
};

// ____ Truck Class from Vehicle Class
class Truck : public Vehicle {
    float loadCapacity;

public:
    Truck(string c, string t, string m, string n, float l)
        : Vehicle(c, t, m, n) {
        loadCapacity = l;
    }

    void display() {
        cout << "\nTruck: " << name;
        cout << "\nMaterial: " << material;
        cout << "\nLoad Capacity: " << loadCapacity << endl;
    }
};

// ____ Main Function
int main() {
    Car c("Red", "SUV", "Steel", "Civic", 5);
    Truck t("Blue", "Heavy", "Iron", "Mazda", 1000);

    c.display();
    t.display();

    return 0;
}