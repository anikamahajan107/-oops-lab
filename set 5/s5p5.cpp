#include <iostream>
using namespace std;

class Account
{
protected:
    int accountNumber;
    float balance;

public:
    Account(int a, float b)
    {
        accountNumber = a;
        balance = b;
    }

    virtual void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account
{
private:
    float interestRate;

public:
    SavingsAccount(int a, float b, float r) : Account(a, b)
    {
        interestRate = r;
    }

    void display() override
    {
        cout << "\n--- Savings Account ---" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class CurrentAccount : public Account
{
private:
    float overdraftLimit;

public:
    CurrentAccount(int a, float b, float o) : Account(a, b)
    {
        overdraftLimit = o;
    }

    void display() override
    {
        cout << "\n--- Current Account ---" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};

int main()
{
    SavingsAccount s1(101, 50000, 6.5);
    SavingsAccount s2(102, 75000, 7.0);

    CurrentAccount c1(201, 100000, 25000);
    CurrentAccount c2(202, 150000, 30000);

    s1.display();
    s2.display();

    c1.display();
    c2.display();

    return 0;
}