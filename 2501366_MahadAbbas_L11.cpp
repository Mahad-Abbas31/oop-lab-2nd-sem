#include <iostream>
using namespace std;

// class Shape{
//     public:
//     virtual double area()=0;
// };

// class Square : public Shape{
//     public:
//     double side;

//     Square(double x){
//         side = x;
//     }

//     double area(){
//         return side*side;
//     }
// };

// class Triangle :  public Shape{
//     public:
//     double base;
//     double height;

//     Triangle(double x, double y){
//         base = x;
//         height = y;
//     }

//     double area(){
//         return 0.5*base*height;
//     }
// };

// int main(){
//     Shape *shapes[]={
//         new Square(2),
//         new Triangle(2, 3),
//         new Square(3),
//         new Triangle(12, 32)
//     };

//     for(int i=0; i<4; i++){
//         cout << "Shape " << i << shapes[i]->area() << endl;
//     }
// }

class Person{
    public:
    int id;
    string name;
    string role;
    
    Person(int i=0, string n="Unknown", string r="Unknown"){
        id = i;
        name = n;
        role = r;
    }

    virtual void performRole() = 0;
};

class Student : public Person{
    public:
    Student(int i=0, string n="Unknown") : Person(i, n){
        role = "Student";
    }

    void performRole() override{
        cout << name << " is studying\n";
    }
};

class Teacher : public Person{
    public:
    Teacher(int i=0, string n="Unknown") : Person(i, n){
        role = "Student";
    }

    void performRole() override{
        cout << name << " is teaching\n";
    }
};

int main(){
    Person* p1 = new Student(1, "Mahad");
    Person* p2 = new Teacher(2, "Amna");

    p1->performRole();
    p2->performRole();

    delete p1;
    delete p2;
}