/*Q5. You are creating an Animal System for a Zoo in Islamabad. You are required to keep all kinds
of information related to all animals.
Create a base Animal Class containing basic animal detail (petName, Specie Name, Weight,
Food ) and child class (named on Animal’s Name) should contain custom animal detail in
parameters. For Instance, custom attributes of Snake and Lion are given below.
a. Snake (Length, IsPoisons)
b. Lion (NumberFeet, Speed, IsDangerous)
c. Eagle (-------- Add 3 Custom Features)
*/
#include <iostream>
using namespace std;

// ____ Animal Class
class Animal {
  protected:
    string petName;
    string specieName;
    string food;
    float weight;

  public:
    void getAnimal() {
        cout << "Enter Pet Name: ";
        cin >> petName;
        cout << "Enter Specie Name: ";
        cin >> specieName;
        cout << "Enter Weight: ";
        cin >> weight;
        cout << "Enter Food: ";
        cin >> food;
    }
};

// ____ Snake Class from Animal Class
class Snake : public Animal {
    float length;
    bool isPoisonous;

  public:
    void getSnake() {
        getAnimal();
        cout << "Enter Length: ";
        cin >> length;
        cout << "Is Poisonous (1/0): ";
        cin >> isPoisonous;
    }

    void display() {
        cout << "\nSnake: " << petName;
        cout << "\nLength: " << length;
        cout << "\nPoisonous: " << isPoisonous << endl;
    }
};

// ____ Lion Class from Animal Class
class Lion : public Animal {
    int feet;
    float speed;
    bool dangerous;

  public:
    void getLion() {
        getAnimal();
        cout << "Enter Number of Feet: ";
        cin >> feet;
        cout << "Enter Speed: ";
        cin >> speed;
        cout << "Is Dangerous (1/0): ";
        cin >> dangerous;
    }

    void display() {
        cout << "\nLion: " << petName;
        cout << "\nSpeed: " << speed;
        cout << "\nDangerous: " << dangerous << endl;
    }
};

// ____ Eagle Class from Animal Class
class Eagle : public Animal {
    float wingspan;
    float height;
    float visionRange;

  public:
    void getEagle() {
        getAnimal();
        cout << "Enter Wingspan: ";
        cin >> wingspan;
        cout << "Enter Flying Height: ";
        cin >> height;
        cout << "Enter Vision Range: ";
        cin >> visionRange;
    }

    void display() {
        cout << "\nEagle: " << petName;
        cout << "\nWingspan: " << wingspan;
        cout << "\nVision Range: " << visionRange << endl;
    }
};

// ____ Main Function
int main() {
    Snake s;
    Lion l;
    Eagle e;

    cout << "\n--- Snake ---";
    s.getSnake();
    s.display();

    cout << "\n--- Lion ---";
    l.getLion();
    l.display();

    cout << "\n--- Eagle ---";
    e.getEagle();
    e.display();

    return 0;
}