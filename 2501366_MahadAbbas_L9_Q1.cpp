/*1. Pak-Wheel requested for a software and asked for the following functionalities.
o Client name, contact, email and transection (only one) are important to keep.
o Client can buy or sell car through pinwheels. The transection details which are
important to keep are date (day), transection type (Buy or Sell) and amount.
Implement the above demand in such a way what if the client is deleted,
none of its transection record will remain. (Use Composition)
*/
#include <iostream>
using namespace std;

// ____ Transaction Class
class Transaction {
    int day;
    string type;
    float amount;

  public:
    Transaction(int d, string t, float a) {
        day = d;
        type = t;
        amount = a;
    }

    void display() {
        cout << "\nTransaction Day: " << day;
        cout << "\nType: " << type;
        cout << "\nAmount: " << amount << endl;
    }
};

// ____ Client Class
class Client {
    string name, contact, email;
    Transaction t; // Composition (strong relationship)

  public:
    Client(string n, string c, string e, int d, string type, float amt)
        : t(d, type, amt) {   // Transaction created inside Client
        name = n;
        contact = c;
        email = e;
    }

    void display() {
        cout << "\nClient Name: " << name;
        cout << "\nContact: " << contact;
        cout << "\nEmail: " << email;
        t.display();
    }
};

// ____ Main Function
int main() {
    Client c("Ali", "12345", "ali@gmail.com", 12, "Buy", 500000);
    c.display();

    return 0;
}