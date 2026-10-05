#include <iostream>
using namespace std;

class BankAccount
{
    int balance;

public:
    BankAccount(int b)
    {
        balance = b;
    }

    void withdraw(int amount)
    {
        if (amount > balance)
        {
            throw "Insufficient Balance";
        }

        balance = balance - amount;
        cout << "Withdrawal successful" << endl;
        cout << "Remaining Balance: " << balance;
    }
};

int main()
{
    int balance, amount;

    cout << "Balance: ";
    cin >> balance;

    cout << "Withdraw: ";
    cin >> amount;

    BankAccount account(balance);

    try
    {
        account.withdraw(amount);
    }
    catch (const char* e)
    {
        cout << "Error: " << e;
    }

    return 0;
}

    
