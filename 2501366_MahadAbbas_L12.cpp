// #include<iostream>
// #include<cstring>

// using namespace std;

// template <class T>
// class Student{
//     char *name;
//     T marks;

//     public:
        
//     // ____ Constructor
//     Student(const char* name = "", T marks = 0){
//         this->name = new char[strlen(name) + 1];
//         strcpy(this->name, name);
//         this->marks = marks;
//     }

//     // ____ Copy Constructor (Good practice)
//     Student(const Student<T> &s){
//         name = new char[strlen(s.name) + 1];
//         strcpy(name, s.name);
//         marks = s.marks;
//     }

//     // ____ Overloading Assignment Operator
//     Student<T>& operator = (const Student<T> &s){
//         if (this != &s) {
//             delete[] name;

//             name = new char[strlen(s.name) + 1];
//             strcpy(name, s.name);
//             marks = s.marks;
//         }

//         return *this;
//     }

//     // ____ Display
//     void display(){
//         cout << "Name: " << name 
//              << "\nMarks: " << marks << endl;
//     }

//     // ____ Destructor
//     ~Student(){        delete[] name;        }
// };

// int main(){
//     Student<int> s1("Mahad", 85);
//     Student<int> s2;

//     s2 = s1;

//     cout << "==================================\n"
//          << "             Student 1            \n"
//          << "==================================\n";
//     s1.display();
//     cout << endl;
         
//     cout << "==================================\n"
//          << "   Student 2 (after assignment)   \n"
//          << "==================================\n";
//     s2.display();
//     cout << endl;

//     // ___ float 
//     Student<float> s3("Ali", 89.5);
//     cout << "\n===== Student 3 (float marks) =====\n";
//     s3.display();

//     return 0;
// }

#include<iostream>
using namespace std;
template<class T>

class Array{
    public:
    int size;
    T arr[10];
    Array(){                        size = 10;        }
    void insert(int i, T val){      arr[i] = T;       }
    T getVal(int i){                return arr[i];    }
};
int main(){
    Array<int> obj;
    Array<char> obj2;
    obj.insert(1,3);
    obj2.insert(1,'A');
}