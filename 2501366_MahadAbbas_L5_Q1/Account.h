#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

using namespace std;

class Account{
private:
    int accNo;
    string name;
    double balance;

    // ___ Static Data Members
    static int totalAccounts;
    static double minBalance;

public:
    Account();

    Account& setAccount(int, string, double);   // method chaining
    void display() const;

    double getBalance() const;
    int getAccNo() const;

    static void showTotalAccounts();
    static double getMinBalance();
};

#endif