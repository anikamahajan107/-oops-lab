#include<iostream>
#include<string>
using namespace std;
class BankAccount{
    private:
    int accountNo;
    string name;
    double balance;
    
   public:
    void setDetails(int acc,double bal,string n){
        accountNo=acc;
        balance=bal;
        name=n;
    }

        void transfer(BankAccount &receiver,double amount){
            if(amount<=balance){
                balance= balance-amount;
                receiver.balance=receiver.balance+amount;
            }
            else{
                cout<<"Insufficient balance"<<endl;
            }
        }
        void displayDetails(){
            cout<<"Account No:"<<accountNo<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"Balance:"<<balance<<endl;
        }
    };

    int main(){
        BankAccount sender,receiver;
        sender.setDetails(12345,1000.0,"John");
        receiver.setDetails(67890,500.0,"Alice");
        
        cout<<"Before transfer:"<<endl;
        cout<<"Sender details:"<<endl;
        sender.displayDetails();
        cout<<"Receiver details:"<<endl;
        receiver.displayDetails();
        
        double amount;
        cout<<"Enter amount to transfer:"<<endl;
        cin>>amount;
        
        sender.transfer(receiver,amount);
        
        cout<<"After transfer:"<<endl;
        cout<<"Sender details:"<<endl;
        sender.displayDetails();
        cout<<"Receiver details:"<<endl;
        receiver.displayDetails();
        
        return 0;
    }