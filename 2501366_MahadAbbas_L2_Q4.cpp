#include <iostream>
using namespace std;

class Circle {
    double radius;
    double pi;

public:
    Circle() {
        radius = 0.0;
        pi = 3.14159;
    }

    Circle(double r) {
        radius = r;
        pi = 3.14159;
    }

    void setRadius(double r) {
        radius = r;
    }

    double getRadius() {
        return radius;
    }

    double getArea() {
        return pi * radius * radius;
    }

    double getDiameter() {
        return radius * 2;
    }

    double getCircumference() {
        return 2 * pi * radius;
    }
};

int main() {
    double r;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    Circle c(r);

    cout << "\nCircle Details:\n";
    cout << "Radius: " << c.getRadius() << endl;
    cout << "Area: " << c.getArea() << endl;
    cout << "Diameter: " << c.getDiameter() << endl;
    cout << "Circumference: " << c.getCircumference() << endl;

    return 0;
}