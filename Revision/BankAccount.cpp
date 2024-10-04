// Create a class BankAccount with a protected member balance. SavingsAccount should
// inherit from BankAccount, and CurrentAccount should inherit from SavingsAccount. Another
// class BankManager should be declared as a friend of CurrentAccount and access its protected
// members. Implement copy constructors and constant member functions to handle account
// information.
// Requirements:
// 1. Use multilevel inheritance with BankAccount, SavingsAccount, and CurrentAccount.
// 2. Implement a copy constructor in each class to copy account details.
// 3. Use constant member functions to display account information.
// 4. Declare BankManager as a friend of CurrentAccount to access and display balance
// information.
#include <iostream>
#include <cstdlib>
using namespace std;
class BankManager;
class BankAccount
{
protected:
    string accountHolderName;
    double balance;

public:
    BankAccount(string name, double balance = 0)
    {
        this->accountHolderName = name;
        this->balance = balance;
    }
    BankAccount(BankAccount const &other)
    {
        this->accountHolderName = other.accountHolderName;
        this->balance = other.balance;
    }
};
class SavingAccount : public BankAccount
{
public:
    SavingAccount(string name, double balance = 0) : BankAccount(name, balance)
    {
    }
    SavingAccount(SavingAccount const &other) : BankAccount(other) {}
};
class CurrnetAccount : public SavingAccount
{
public:
    CurrnetAccount(string name, double balalnce) : SavingAccount(name, balalnce) {}
    CurrnetAccount(CurrnetAccount const &other) : SavingAccount(other) {}
    friend BankManager;
};
class BankManager
{
public:
    void display(CurrnetAccount const temp)
    {
        cout << "Account HolderName :" << temp.accountHolderName << "\tand balance is $" << temp.balance << endl;
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    CurrnetAccount b("uchiha obito", 432);
    BankManager manager;
    manager.display(b);

    CurrnetAccount c(b);
    manager.display(c);
    return EXIT_SUCCESS;
}