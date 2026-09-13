#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private:
    string name;
    int account_Number;
    int deposit_Amount;
    double balance;
  
  public:
  BankAccount(){
      cout<<"Details of Account:"<<endl;
      cout<<"Name of Account Owner:"<<endl;
      cin>>name;
     cout<<"Account Number:"<<endl;
      cin>>account_Number;
      cout<<"Deposited Amount:"<<endl;
      cin>>deposit_Amount;
      balance=deposit_Amount;
      }
    void Amount()   {
        int withdrawal;
        cout<<"Enter the withdrawal amount:"; 
        cin>>withdrawal;
        
        if(withdrawal<=balance){
        balance=balance-withdrawal;
        cout<<"Withdrawal Successful"<<endl;
        }
        else
        cout<<"Insufficient Balance"<<endl;
        
    }
      
      void displayBalance(){
          
          
          cout<<"Current Balance:"<<balance ;
         
      }
};
int main()
{
    BankAccount c;
    c.Amount();
    c.displayBalance();
}