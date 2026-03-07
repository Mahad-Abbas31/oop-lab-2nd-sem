/*You are developing a Bank Account Management System for a private bank.
The bank wants to:
a. Store multiple customer accounts
b. Update account details using method chaining
c. Automatically count total accounts created
d. Maintain a minimum balance policy (static for all accounts)
e. Use static method to display total accounts
f. Pass accounts to a function using pointer
g. Calculate average balance
h. Display low balance accounts
i. Find highest balance account
j. Use separate .h and .cpp files
*/

#include <iostream>
#include "Account.h"
using namespace std;

void averageBalance(Account *a, int n){
    double sum = 0;

    for(int i=0;i<n;i++)
        sum = sum + a[i].getBalance();

    cout << "Average Balance: " << sum/n << endl;
}

void lowBalance(Account *a, int n){
    cout << "\nLow Balance Accounts\n";

    for(int i=0;i<n;i++){
        if(a[i].getBalance() <= Account::getMinBalance())
            a[i].display();
    }
}

void highestBalance(Account *a, int n){
    int index = 0;

    for(int i=1;i<n;i++){
        if(a[i].getBalance() > a[index].getBalance())
            index = i;
    }

    cout << "\nHighest Balance Account\n";
    a[index].display();
}

int main(){

    int n;
    cout << "Enter number of accounts: ";
    cin >> n;

    Account *acc = new Account[n];

    int id;
    string name;
    double bal;

    for(int i=0;i<n;i++){
        cout << "\nEnter Account No, Name, Balance\n";
        cin >> id >> name >> bal;

        acc[i].setAccount(id,name,bal);   // method chaining possible
    }

    cout << "\nAll Accounts\n";
    for(int i=0;i<n;i++)
        acc[i].display();

    Account::showTotalAccounts();

    averageBalance(acc,n);
    lowBalance(acc,n);
    highestBalance(acc,n);

    delete [] acc;

    return 0;
}