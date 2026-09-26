#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
    string name;
    int salary;
    
};
void ArrayEmployee(Employee e[],int n){
    for(int i=0;i<n;i++){
        cout<<"Enter the name of employee "<<i+1<<":"<<endl;
        cin>>e[i].name;
        cout<<"Enter the salary of employee "<<i+1<<":"<<endl;
        cin>>e[i].salary;
    }
}
Employee highestSalary(Employee e[],int n){
    Employee highest=e[0];
    for(int i=1;i<n;i++){
        if(e[i].salary>highest.salary){
            highest=e[i];
        }
        
    }
    return highest;
}

//function to give 10% increment to salary of all employees
Employee incrementSalary(Employee e){
    
        e.salary=e.salary+(e.salary*0.1);
        return e;
    }

int main(){
    int n;
    cout<<"Enter the number of employees:"<<endl;
    cin>>n;
    Employee e[n];
    ArrayEmployee(e,n);
   Employee highest= highestSalary(e,n);
   cout<<"Employee with highest salary:"<<endl;
    cout<<"Name:"<<highest.name<<endl;
    cout<<"Salary:"<<highest.salary<<endl;
   Employee revised= incrementSalary(highest);
    cout<<"After incrementing salary by 10%:"<<endl;
    cout<<"Name:"<<revised.name<<endl;
    cout<<"Salary:"<<revised.salary<<endl;

return 0;
}