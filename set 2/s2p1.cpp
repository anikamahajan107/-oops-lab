#include <iostream>
#include<string.h>
using namespace std;

class student{
    private:
    string name;
    int rollNo;
    
    public:
void setData(){
    cout<<"Details of student:"<<endl;
    getline(cin,name);
    cin>>rollNo;
}
void displayData()
{
    cout<<"Name of student:"<<name<<endl;
    cout<<"RollNo of student:"<<rollNo;
}
};
int main()
{
    student s;
    s.setData();
    s.displayData();
}