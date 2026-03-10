#include<iostream>
#include<string>
using namespace std;

class Student {
private:
    const int roll;
    string name;
    float cgpa;

public:

    Student(int r, float c, string n):roll(r){
        cgpa = c;
        name = n;
    }
    
    void display() const{
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
    }
    
    void updateCGPA(float c, int r){
        cgpa = c;
        // roll = r; // Error: roll is a const variable and cannot be modified after initialization
    }

};

// ___ Mutable Keyword
// ___ 
int main(){
    Student obj(101, 3.5, "John");
    Student obj2(102, 3.6, "Doe");

    const Student* const ptr = &obj;

    ptr->display();
    // ptr->updateCGPA(3.8, 101); // Error: Cannot modify the object through a pointer to const
    // ptr->display();
    
    // ptr = &obj2;
    // ptr->display();
    return 0;
}