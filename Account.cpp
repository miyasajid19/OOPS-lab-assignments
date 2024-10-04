#include <iostream>
#include <cstdlib>
using namespace std;
class Transaction;
class Account
{
    double balance;

public:
    Account()
    {
        this->balance = 0;
    }
    Account(double balance)
    {
        this->balance = balance;
    }
    double getBalance()
    {
        return this->balance;
    }
    friend bool transferMoney(Account &, Account &, Transaction);
};
class Transaction
{

    double amount;

public:
    Transaction()
    {
        this->amount = 0;
    }
    Transaction(double amount)
    {
        this->amount = amount;
    }
    friend bool transferMoney(Account &, Account &, Transaction);
};
bool transferMoney(Account &sender, Account &reciever, Transaction const transactions)
{
    if (sender.getBalance() < transactions.amount)
    {
        return false;
    }
    else
    {
        sender.balance -=transactions.amount;
        reciever.balance += transactions.amount;
        return true;
    }
}
int main()
{
    Account obito(12345.55);
    Account kakashi(1000.35);
    Transaction transaction(432);
    cout << "Obito's current balance:: " << obito.getBalance() << endl;
    cout << "Kakashi's current balance:: " << kakashi.getBalance() << endl;
    if (transferMoney(obito, kakashi, transaction))
        cout << "transferred successfully" << endl;
    else
        cout << "Transaction failed" << endl;

    cout << "Obito's current balance:: " << obito.getBalance() << endl;
    cout << "Kakashi's current balance:: " << kakashi.getBalance() << endl;
    return EXIT_SUCCESS;
}
