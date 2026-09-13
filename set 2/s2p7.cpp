
#include <iostream>
#include<string>
using namespace std;
class Employee
{ private:
    string name;
    double salary;
    double HRA;   //HOUSE RENTAL ALLOWANCE
    double DA;   //DEARNESS ALLOWANCE     
    double grossSalary;
    
public:
Employee(){
    cout<<"Enter the name of Employee:"<<endl;
    cin>>name;
    cout<<"Salary of Employee:";
    cin>>salary;
}
void calc(){
    HRA =0.2*salary;
    DA =0.1*salary;
    grossSalary=salary+HRA+DA;
} 
void displayDetails()
{
    cout<<"HRA:"<<HRA<<endl;
    cout<<"DA:"<<DA<<endl;
    cout<<"Gross Salary:"<<grossSalary;
}
};
    int main(){
    Employee E;
    E.calc();
    E.displayDetails();
    }
    
