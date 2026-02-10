#include <iostream>
#include <string>

using namespace std;

//____ Class ____
class Distance{
private:
    int feet;
    float inches;

public:
    //____ Methods/Functions ____
    void setFeet(int i){
        feet = i;
    }

    void setInches(float f){
        inches = f;
    }
    
    void showDistance(){
        cout << "\nThe Distance is: " << feet << " ft " << inches << " inch\n\n";
    }

};

int main(){
    Distance d;
    int ft;
    float inch;

    cout << "Enter No. of Feet: ";
    cin >> ft;
    
    //____ Validations
    while (ft < 0) {
        cout << "Invalid! Enter non-negative feet: ";
        cin >> ft;
    }

    cout << "Enter No. of Inches (0-11): ";
    cin >> inch;
    
    //____ Validations
    while (inch < 0 || inch >= 12) {
        cout << "Invalid! Enter inches between 0 and 11: ";
        cin >> inch;
    }

    d.setFeet(ft);
    d.setInches(inch);
    d.showDistance();
}
