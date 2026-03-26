/* Q1: Ali Raza is a frequent long distance driver. He wants to compute how much distance he
covers over a number of days. Ali also wants to know the average distance travelled.
To perform this task you will need to create a class called distance. The class
will contain the fuel price in liter and also the distance he has travelled. To
find the average and the distance travelled you will need to overload two
operators as follows:
• + operator to compute the total distance travelled.
• / operator to compute the average distance travelled.
In the main( ) you will create six objects and then you will write a single expression
that will demonstrate the use of + and the / operator. Your expression should
resemble the following: obj1+obj2+obj3+obj4+obj5+obj6 / 6
*/
#include <iostream>

using namespace std;

class Distance{
    float fuel;
    float price;
    float distance;

    public:

    // ____ Constructor
    Distance(float fuel=0, float distance=0){
        this->fuel = fuel;
        this->price = fuel * 355.7;
        this->distance = distance;
    }

    // ____ Setters
    void setFuel(float fuel){             this->fuel = fuel;              }
    void setPrice(float price){           this->price = price;            }
    void setDistance(float distance){     this->distance = distance;      }

    // ____ Getters
    float getFuel() const{             return fuel;            }
    float getPrice() const{            return price;           }
    float getDistance() const{         return distance;        }

    // ____ (+) Overloading
    Distance operator+(Distance obj){
        Distance temp;

        temp.distance = this->distance + obj.distance;
        temp.fuel = this->fuel + obj.fuel;
        temp.price = this->price + obj.price;

        return temp;
    }

    // ____ (/) Overloading for Avg
    Distance operator/(int n){
        Distance temp;

        temp.distance = this->distance / n;
        temp.fuel = this->fuel / n;
        temp.price = this->price / n;

        return temp;
    }

    // ____ Display
    void display(){
        cout << "\nDistance: " << distance
             << "\nFuel: " << fuel
             << "\nPrice: " << price;
             
    }

};

int main(){
    Distance obj1(80, 543);
    Distance obj2(82, 533);
    Distance obj3(30, 323);
    Distance obj4(41, 531);
    Distance obj5(51, 113);
    Distance obj6(61, 431);

    Distance avg;

    avg = (obj1+obj2+obj3+obj4+obj5+obj6) / 6;

    cout << "===========================\n"
         << "           Average         \n"
         << "===========================\n";
    avg.display();

}