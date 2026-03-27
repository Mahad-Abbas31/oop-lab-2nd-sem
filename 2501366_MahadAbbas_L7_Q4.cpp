/* Q4: Create a Distance class with the following data members:
. meter
. centimeter
. Overload the += operator to add the distance of d2 to d1.
*/
#include <iostream>

using namespace std;

class Distance{
    float meter;
    float centimeter;

    public:
    // ____ Constructor
    Distance(float centimeter = 0, float meter = 0){
        this->centimeter = centimeter;
        this->meter = meter;
    }

    // ____ Setters
    void setMeter(float meter){              this->meter = meter;              }
    void setCentimeter(float centimeter){    this->centimeter = centimeter;    }

    // ____ Getters
    float getCentimeter(){      return centimeter;    }
    float getMeter(){           return meter;         }

    // ____ (+=) Overloading
    void operator += (const Distance &obj) {
        meter = meter + obj.meter;
        centimeter = centimeter + obj.centimeter;

        // Conversion of Units
        if (centimeter >= 100) {
            meter += (int)(centimeter / 100);
            centimeter = (int)centimeter % 100;
        }
    }

    // ____ Display
    void display() {
        cout << meter << " meter(s) and " << centimeter << " centimeter(s)" << endl;
    }
};

int main (){
    Distance d1(80, 2);   
    Distance d2(50, 1);   

    d1 += d2;

    cout << "============================\n"
         << "       After addition       \n"
         << "============================\n";
    
    d1.display();

    return 0;
}