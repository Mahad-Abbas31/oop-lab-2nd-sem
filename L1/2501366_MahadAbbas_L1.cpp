#include <iostream>

using namespace std;

// struct student{

//     int id;
//     string name;
//     string dept;

//     // void display(int i, string n, string d){
//     //     id = i;
//     //     name = n;
//     //     dept = d;
//     //     cout << id << endl << name << endl << dept << endl;
//     // }

//     void getdata(){
//         cout << "Enter ID\n";
//         cin >> id;
//         cout << "Enter Name\n";
//         cin >> name;
//         cout << "Enter Department\n";
//         cin >> dept;
//     }
    
//     void display(){
//         cout << id << endl << name << endl << dept << endl;
//     }; 
// };

class employee{
private:
    int id;
    string name;

public:
    void getdata(){
        cout << "Enter ID: \n";
        cin >> id;
        cout << "Enter Name: \n";
        cin >> name;
    }

    void setdata(int i, string n){
        id = i;
        name = n;
    }

    void display(){
        cout << id << endl << name << endl;
    }
};

int main(){
//     student s1;
//     const int SIZE = 10;
//     student s[10];
 
//     // s1.display(2501366, "Mahad", "BSCS");

//     for(int i =0; i<SIZE; i++){
//         cout << "Enter DATA for Student " << i+1
//             << "\n-------------------\n";
   
//         s[i].getdata();
//     }
    
//     cout << "=========================\n";
//     cout << "------DATA DISPLAY------\n";
//     cout << "=========================\n";

//     for(int i =0; i<SIZE; i++){
//         cout << "Displaying DATA for Student " << i+1
//             << "\n-------------------\n";
//         s[i].display();

//         cout << endl << endl;
//     }

    employee ob1;

    // ob1.getdata();

    ob1.setdata(1241, "Arham");

    cout << "=========================\n";
    cout << "------DATA DISPLAY------\n";
    cout << "=========================\n";

    ob1.display();

    return 0;
}