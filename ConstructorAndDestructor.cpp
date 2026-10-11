#include<iostream>

using namespace std;

class BankAccount {
    private: // encapsulating data members
        string accountHolder;
        int Balance;


    public:
    //overloading constructor
    BankAccount() {
        this->accountHolder = "Unknown";
        this->Balance = 0;
    }
    // constructor
    BankAccount(string accountHolder, int balance) {
        this->accountHolder = accountHolder;
        if (balance > 0) {
            this->Balance = balance;
        }

    }
    ~BankAccount() {};

    // initializing getters and setters
    string getAccountHolder() {
        return accountHolder;
    }

    int getBalance() {
        return Balance;
    }

    void setaccountHolder(string accountHolder) {
        this->accountHolder = accountHolder;
    }
};


int main() {
    BankAccount bankAccount1("John", 150);
    BankAccount bankAccount2;
    cout<<bankAccount1.getAccountHolder()<<endl;
    cout<<bankAccount1.getBalance()<<endl;
    cout<<bankAccount2.getAccountHolder()<<endl;
    cout<<bankAccount2.getBalance()<<endl;
    return 0;
}
