#include <iostream>
#include <string>
#include <math.h>

#define rate 5
#define minVal 500

using namespace std;

class Account {
    public:
        string customerName;
        int accountNumber;
        int type; // 1 for saving and 2 for current.
        double balance;

        void initialize(string cName, int accNo, int accType) {
            customerName = cName;
            accountNumber = accNo;
            type = accType;
            balance = 1000;
            cout<<"Account created for "<<customerName<<endl;
        }

        void deposit(int value) {
            balance += value;
            cout<<"Deposit of Rs. "<<value<<" is successful."<<endl;
        }

        void displayBalance() {
            cout<<"The balance in this account is: "<<balance<<endl;
        }
};

class Sav_acct:public Account {
    public:
        void calculateInterest(int time) {
            double oldBalance = balance;
            cout<<"Old balance "<<oldBalance<<endl;
            double newBalance = balance * (pow((1 + rate / 100), time));
            cout<<"New balance "<<newBalance<<endl;
            cout<<"C. I. given."<<endl;
            cout<<"C. I. earned = Rs "<<newBalance-oldBalance<<endl;
        }

        void withdraw(int value) {
            if(balance-value >= 0) {
                balance -= value;
                cout<<"Withdrawal of Rs. "<<value<<" Successful"<<endl;
                cout<<"New balance = "<<balance<<endl;
            }
            else {
                cout<<"Balance is not enough."<<endl;
                cout<<"Cannot withdraw that amount."<<endl;
            }
        }
};

class Cur_acct:public Account {
    public:
        void withdraw(int value) {
            if(balance-value >= minVal) {
                balance -= value;
                cout<<"Withdrawal of Rs. "<<value<<" Successful"<<endl;
                cout<<"New balance = "<<balance<<endl;;
            }
            else {
                cout<<"That transaction lowers your balance below the minimum value."<<endl;
                cout<<"You have to pay a fee of Rs. 100;"<<endl;
            }
        }
};

int main()
{
    Sav_acct sAcc;
    Cur_acct cAcc;
    sAcc.initialize("Raj Singh", 1234, 1);
    cAcc.initialize("Mukesh Rai", 5678, 2);
    // Saving account operations
    cout<<"\n\n";
    cout<<"Operations on Savings Account"<<endl;
    sAcc.deposit(2000);
    sAcc.calculateInterest(3);
    sAcc.displayBalance();
    sAcc.withdraw(5000);
    sAcc.withdraw(2500);
    // Current account operations
    cout<<"\n\n";
    cout<<"Operations on Current Account"<<endl;
    cAcc.deposit(5000);
    cAcc.displayBalance();
    cAcc.withdraw(2000);
    cAcc.displayBalance();
    cAcc.withdraw(3750);
    cAcc.displayBalance();
    return 0;
}