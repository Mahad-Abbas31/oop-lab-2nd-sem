#include "Account.h"

int Account::totalAccounts = 0;
double Account::minBalance = 5000;

Account::Account(){
    accNo = 0;
    name = "";
    balance = 0;
}

Account& Account::setAccount(int accNo, string name, double balance){
    this->accNo = accNo;
    this->name = name;

    if(balance >= minBalance)
        this->balance = balance;
    else
        this->balance = minBalance;

    totalAccounts++;
    return *this;
}

void Account::display() const{
    cout << "Account No: " << accNo << endl;
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << endl;
    cout << "----------------------" << endl;
}

double Account::getBalance() const{    return balance;    }

int Account::getAccNo() const{    return accNo;    }

void Account::showTotalAccounts(){    cout << "Total Accounts: " << totalAccounts << endl;    }

double Account::getMinBalance(){    return minBalance;    }