#include<iostream>
using namespace std;
class Marks{
    private:
    int marks[5];
    int highest;
public:
Marks(){
    cout<<"Enter the marks of students"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>marks[i];
        
    }
}
void findMax(){
    
    highest =marks[0];
    for(int i=0;i<5;i++)
    { if(marks[i]>highest)
      highest =marks[i];
    }
}
void result()
{
    cout<<"The highest marks are:"<<highest;
}
};
int main(){
    Marks m;
    m.findMax();
    m.result();
}
