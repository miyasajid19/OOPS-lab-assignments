#include <iostream>
#include <cstdlib>
using namespace std;

class BankManager; // Forward declaration

class BankAccount {
protected:
    string accountHolderName;
    double balance;

public:
    BankAccount(string name, double balance = 0) 
        : accountHolderName(name), balance(balance) {}
    
    BankAccount(const BankAccount &other) 
        : accountHolderName(other.accountHolderName), balance(other.balance) {}

    // Constant member function to display account info
    virtual void displayInfo() const {
        cout << "Account Holder Name: " << accountHolderName 
             << ", Balance: $" << balance << endl;
    }
    
    // Virtual destructor
    virtual ~BankAccount() {}
};

class SavingsAccount : public BankAccount {
public:
    SavingsAccount(string name, double balance = 0) 
        : BankAccount(name, balance) {}

    SavingsAccount(const SavingsAccount &other) 
        : BankAccount(other) {}

    void displayInfo() const override {
        cout << "Savings Account - ";
        BankAccount::displayInfo();
    }
};

class CurrentAccount : public SavingsAccount {
public:
    CurrentAccount(string name, double balance) 
        : SavingsAccount(name, balance) {}

    CurrentAccount(const CurrentAccount &other) 
        : SavingsAccount(other) {}

    friend class BankManager; // Granting access to BankManager

    // Display information using friend function
    void displayInfo() const override {
        cout << "Current Account - ";
        SavingsAccount::displayInfo();
    }
};

class BankManager {
public:
    void display(const CurrentAccount &account) const {
        // Direct access to protected members
        cout << "Account Holder Name: " << account.accountHolderName 
             << ", Balance: $" << account.balance << endl;
    }
};

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    CurrentAccount b("Uchiha Obito", 432);
    BankManager manager;

    manager.display(b);
    b.displayInfo(); // Using the member function to display account info

    CurrentAccount c(b); // Using copy constructor
    manager.display(c);
    c.displayInfo(); // Using the member function to display account info

    return EXIT_SUCCESS;
}
