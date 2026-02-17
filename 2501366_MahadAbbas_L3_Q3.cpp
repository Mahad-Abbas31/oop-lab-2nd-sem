/*
Create a class BankAccount:
• double balance
• double* transactions (dynamic array storing transaction amounts)
• int transactionCount
1. Constructor initializes balance and allocates memory for transactions.
2. Implement shallow copy constructor first.
3. Implement deep copy constructor.
4. In main(), copy account objects and show how modifying transactions in one object affects
the other (for shallow) vs independent copy (for deep).
*/
#include <iostream>

using namespace std;

class BankAccount {
public:
    double balance;
    double* transactions;
    int transactionCount;

    // ___ Constructor
    BankAccount(double b, int count) {
        balance = b;
        transactionCount = count;
        transactions = new double[count];

        for(int i = 0; i < count; i++)
            transactions[i] = 0;
    }

    // ___ Deep Copy Constructor
    BankAccount(const BankAccount &obj) {
        balance = obj.balance;
        transactionCount = obj.transactionCount;
        
        transactions = new double[transactionCount];
        
        for(int i = 0; i < transactionCount; i++)
            transactions[i] = obj.transactions[i];
    }
    void display() {
        cout << "Balance: " << balance << endl
             << "Transactions: ";

        for(int i = 0; i < transactionCount; i++)
            cout << transactions[i] << " ";

        cout << endl;
    }

    ~BankAccount() {    delete[] transactions;    }
};

int main() {
    BankAccount acc1(1000, 3);
    acc1.transactions[0] = 200;

    BankAccount acc2 = acc1;

    acc2.transactions[0] = 500;

    cout << "acc1:\n";
    acc1.display();

    cout << "acc2:\n";
    acc2.display();

    return 0;
}