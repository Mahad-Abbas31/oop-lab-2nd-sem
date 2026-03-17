// #include <iostream>
// using namespace std;
// class decrement{
//     int val;
//     public:
//     decrement(){
//         val=5;
//     }
//     decrement operator--(int){
//         decrement temp;
//         val--;
//         return temp;
//     }
//     void display(){
//         cout<<"value is: "<<val<<endl;
//     }
// };
// int main()
// {
//     decrement obj,result;
//     result=obj--;
//     result.display();
//     obj.display();
//     return 0;
// }


#include<iostream>
using namespace std;

class BankAccount{
private:
    int balance;
    int reward;

public:
    void setData(){
        cout << "Enter balance: ";
        cin >> balance;
        cout << "Enter reward points: ";
        cin >> reward;
    }

    void display() const{
        cout << "Balance: " << balance << endl
             << "Reward Points: " << reward << endl;
    }

    BankAccount operator+(BankAccount obj2){
    
        BankAccount obj3;
        obj3.balance = balance + obj2.balance;
        obj3.reward = reward + obj2.reward;

        return obj3;   // Return the original state before increment
    }

    BankAccount operator-(BankAccount obj2){
    
        BankAccount obj3;
        obj3.balance = balance - obj2.balance;
        obj3.reward = reward -  obj2.reward;

        return obj3;   // Return the original state before increment
    }

};

int main(){
    BankAccount obj1, obj2, total, less;

    cout << "Enter details for Account 1:\n";
    obj1.setData();

    cout << "Enter details for Account 2:\n";
    obj2.setData();

    total = obj1 + obj2;  // Use the overloaded + operator
    cout << "Total Account Details:\n";
    total.display();

    less = obj1 - obj2;  // Use the overloaded - operator
    cout << "Difference Account Details:\n";
    less.display();
}