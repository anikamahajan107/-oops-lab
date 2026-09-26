#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private:
    int accountNumber;
    string customerName;
    static int totalAccounts;
    public:
    BankAccount(int acc, string name)
    {
        accountNumber=acc;
        customerName=name;
        totalAccounts++;
    }
    static void displayTotalAccounts(){
        cout<<"Total number of bank accounts created :"<<totalAccounts<<endl;
        
    }
};
int BankAccount::totalAccounts=0;
int main(){
    BankAccount b1(105,"Esha");
    BankAccount b2(308,"Vaani");
    BankAccount b3(209,"Ansh");
 BankAccount::displayTotalAccounts();
    return 0;
}