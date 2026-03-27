/* Q5: Write a C++ program to create a class Student containing:
name (stored using a pointer char*)
marks
Tasks:
Allocate memory dynamically for the name.
Overload the assignment operator = to copy the data of one object to another.
Show the result using two objects.
*/
#include<iostream>
#include<cstring>

using namespace std;

class Student{
    char *name;
    int marks;

    public:
        
    // ____ Constructor
    Student(const char* name = "", int marks = 0){
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->marks = marks;
    }

    // ____ Copy Constructor (Good practice)
    Student(const Student &s){
        name = new char[strlen(s.name) + 1];
        strcpy(name, s.name);
        marks = s.marks;
    }

    // ____ Overloading Assignment Operator
    Student& operator = (const Student &s){
        if (this != &s) {
            delete[] name;

            name = new char[strlen(s.name) + 1];
            strcpy(name, s.name);
            marks = s.marks;
        }

        return *this;
    }

    // ____ Display
    void display(){
        cout << "Name: " << name 
             << "\nMarks: " << marks << endl;
    }

    // ____ Destructor
    ~Student(){        delete[] name;        }
};

int main(){
    Student s1("Mahad", 85);
    Student s2;

    s2 = s1;

    cout << "==================================\n"
         << "             Student 1            \n"
         << "==================================\n";
    s1.display();
    cout << endl;
         
    cout << "==================================\n"
         << "   Student 2 (after assignment)   \n"
         << "==================================\n";
    s2.display();
    cout << endl;

    return 0;
}