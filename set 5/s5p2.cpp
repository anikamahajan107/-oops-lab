#include<iostream>
using namespace std;
class Employee{
    protected:
    int ID;
    string name;
    
    public:
    Employee(int d ,string n){
    ID=d;
    name=n;

    }
};

class Manager :public Employee{
    private:
    string department;
    int salary;


public:
Manager (int d,string n,string t,int s):Employee (d,n){
    department=t;
    salary=s;
    
}

void display(){
     cout<<"ID = "<<ID<<endl;
    cout<<"Name = "<<name<<endl;
    cout<<"Department = "<<department<<endl;
    cout<<"Salary = "<<salary<<endl;
    cout<<endl;
}
};
int main (){
    Manager m[5]={
        Manager(102,"Aman","Software",80000),
         Manager(119,"Alankrit","AI & ML",56000),
          Manager(157,"Yuvraj","Marketing",40000),
           Manager(182,"Manish","IT",65000),
            Manager(192,"Vansh","Cybersecurity",70000),
    };
    cout<<"Details of Manager:"<<endl;
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Manager : "<< i+1 <<endl;
        m[i].display();
    }
    
}