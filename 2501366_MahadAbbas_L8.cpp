#include <iostream>
using namespace std;

// class B;

// class A{
//     int num1;
  
//     public:
//     void setX(int x){    num1 = x;    }
//     friend void add(A, B);
// };

// class B{
//     int num2;
  
//     public:
//     void setY(int y){    num2 = y;    }
//     friend void add(A, B);
// };

// // ____ Freinds Functions
// void add(A o1, B o2){
//     int sum = o1.num1 + o2.num2;
//     cout << "Sum = " << sum << endl;
// }

// class Person{
//     string name;

//     public:
//     Person(string n){      name = n;     }

//     string getName(){    return name;    }
// };

// class Student:public Person{
//     int roll;

//     public:
//     Student(string n, int r):Person(n){
//         roll = r;
//     }

//     int getRoll(){    return roll;    }
// };

// class CR:public Student{
//     public:
//     CR(string n, int r):Student(n,r){

//     }
//     void display(){
//         cout << "-------------------------------------\n"
//              << "Name: " << getName() << endl
//              << "Roll No. " << getRoll() << endl
//              << "-------------------------------------\n";
//     }
// };
class Person{
    string name;

    public:
    Person(string n){
        name = n;
    }

    string getName(){    return name;    }
};

class Student:public Person{
    int roll;

    public:
    Student(string n, int r):Person(n){
        roll = r;
    }

    int getRoll(){      return roll;    }
};

class Marks{
    int marks;

    public:
    Marks(int m){    marks = m;    }

    int getMarks(){    return marks;    }
};

class Result:public Student, public Marks{
    
    public:
    Result(string n, int r, int m):Student(n,r),Marks(m){}
    void display(){
        cout << "-------------------------------------\n"
             << "Name: " << getName() << endl
             << "Roll No. " << getRoll() << endl
             << "Marks: " << getMarks() << endl
             << "-------------------------------------\n";
    }
};


int main() {
    // A a;
    // B b;

    // a.setX(10);
    // b.setY(20);

    // add(a, b);

    // CR s1("Taha", 2501360);
    // s1.display();
    Result r("Mahad", 2501366, 99);
    r.display();
}