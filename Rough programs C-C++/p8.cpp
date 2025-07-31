/*

Mia just opened a new savings account with her local bank. To keep track
of her transactions,she decided to write a simple c++ program to manage
her account. the program helps her deposit money and ensures the maintains
a minimum balance whenever she withdraws funds.
Crete a class "BankAccount" with fields "accountNumber", "balance" and a
method "deposit()" that adds an amount to the balance.
Create a subclass "SavingAccount" that extends "BankAccont" and adds a field
"minimumBalance" and a method "withdraw()" that subtracts an amount from
the balance.

Create an object of the "SavingsAccount" class and call the "deposite()"
and  "withdraw()" methods.

Input Format:
Values for banking!

output format
balance.

write a program to implemennt the following logic using inheritence .create a present class and
implenmt the fun method. inhertentance create the main class thatt inheritence the parents class and call thee function fun method inside tthe psrent class

*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class BankAccount {
protected:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void displayBalance() {
        cout << fixed << setprecision(2) << balance << endl;
    }
};

class SavingsAccount : public BankAccount {
public:
    double minimumBalance;

    SavingsAccount(string accNum, double initialBalance, double minBalance)
        : BankAccount(accNum, initialBalance) {
        minimumBalance = minBalance;
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            return;
        }
        if ((balance - amount) >= minimumBalance) {
            balance -= amount;
        }
    }
};

int main() {
    string accNum;
    double initialBal, depositAmt, withdrawAmt, minBal;
    cout<<"Enter the Account Number : ";
    cin >> accNum;
    cout<<"Enter the intitial balace : ";
    cin >>initialBal;
    cout<<"Enter the min balance : ";
    cin >>minBal;
    cout<<"Enter the deposit amount : ";
    cin >>depositAmt;
    cout<<"Enter the withdraw amount : ";
    cin >>withdrawAmt;
    SavingsAccount miasAccount(accNum, initialBal, minBal);
    miasAccount.deposit(depositAmt);
    miasAccount.withdraw(withdrawAmt);
    miasAccount.displayBalance();
    return 0;
}
