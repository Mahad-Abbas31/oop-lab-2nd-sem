/*
Suppose you have a Bank Account with an initial amount of $50 and you have to add some
more amount to it. Create a class 'AddAmount' with a data member named 'amount' with
an initial value of $50. Now make two constructors of this class as follows:
o Without any parameter - no amount will be added to the Bank Account.
o Having a parameter which is the amount that will be added to the Bank Account
o Create an object of the 'AddAmount' class and display the final amount in the Bank
Account.
*/
#include <iostream>

using namespace std;

class AddAmount {
    int amount;

public:
    // ___ Default Constructor
    AddAmount() {
        amount = 50;
    }

    // ___ Parametric Constructor
    AddAmount(int add) {
        amount = 50 + add;
    }

    // ___ Methods/Functions
    void display() {
        cout << "Final Amount: $" << amount << endl;
    }
};

int main() {
    AddAmount a1;
    a1.display();

    AddAmount a2(30);
    a2.display();

    return 0;
}