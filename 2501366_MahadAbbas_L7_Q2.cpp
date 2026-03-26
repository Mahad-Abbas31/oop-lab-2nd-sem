/*Q2: Create a class “toll”, that represents the toll tax of a vehicle. According to government
policy the toll tax of a vehicle is the number of wheels of vehicle multiplied by 6. Your
class should have data members asfollows: wheels, tax, fine. Suppose the fine of a vehicle
is 1 rupee. The
+ operator should work with multiple objects in main.
• Overload the stream insertion and extraction to input and output data of the objects
• Use the + operator to find the total tax collected in a day.
• Use the – operator to deduct 5 from the total tax.
• Create the ++ operator to fine a particular car.
*/
#include <iostream>
using namespace std;

class Toll{
    int wheels;
    int tax;
    int fine;

    public:

    // ____ Constructor
    Toll(int wheels = 0, int fine = 0){
        this->wheels = wheels;
        this->tax = wheels * 6;
        this->fine = fine;
    }

    // ____ Setters
    void setWheels(int wheels){    this->wheels = wheels;    }
    void setTax(){                 this->tax = wheels * 6;   }

    // ____ Getters
    int getWheels(){    return wheels;    }
    int getTax(){       return tax;       }

    // ____ (+)Overloading
    Toll operator+(Toll obj){
        Toll temp;

        temp.tax = this->tax + obj.tax;
        temp.fine = this->fine + obj.fine;
        temp.wheels = 0;

        return temp;
    }

    // ____ (-)Overloading
    Toll operator-(Toll obj){
        Toll temp;

        temp.tax = this->tax - obj.tax;
        temp.fine = this->fine - obj.fine;
        temp.wheels = 0;

        return temp;
    }

    // ____ (-)Overloading .int
    Toll operator-(int n){
        Toll temp;

        temp.tax = this->tax - n;
        temp.fine = this->fine;
        temp.wheels = 0;

        return temp;
    }

    // ____ Stream Insertion <<
    friend ostream& operator<<(ostream &out, Toll &t) {
        out << "Wheels: " << t.wheels
            << " Tax: " << t.tax
            << " Fine: " << t.fine << endl;
        return out;
    }

    // ____ Stream Extraction >>
    friend istream& operator>>(istream &in, Toll &t) {
        cout << "Enter wheels: ";
        in >> t.wheels;

        t.tax = t.wheels * 6;
        t.fine = 0;

        return in;
    }

    // ----- ++ operator → fine a car (1 rupee)
    Toll operator++() {
        fine += 1;
        return *this;
    }
};

int main(){

    Toll t1, t2, t3, total, result;

    cin >> t1;
    cin >> t2;
    cin >> t3;

    total = t1 + t2 + t3;
    cout << "\nTotal tax = " << total.getTax() << endl;

    result = total - 5;
    cout << "After deducting 5 = " << result.getTax() << endl;

    ++t1;
    cout << "\nAfter fine on first car:\n";
    cout << t1;

    return 0;
}