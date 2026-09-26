#include<iostream>
using namespace std;
class Student{
    public:
    int rollNo;
    double marks;
    
    void setDetails(){
        cout<<"Enter the roll no of student:"<<endl;
        cin>>rollNo;
        cout<<"Enter the marks of student:"<<endl;
        cin>>marks;
    }
    
};
Student findTop(Student a,Student b){
    
    if(a.marks>b.marks){
    return a;
        
    }
    
    else{
    return b;
}
}
int main(){
Student a,b;
a.setDetails();
b.setDetails();
Student c;
c=findTop(a,b);
cout<<"Highest marks:"<<c.marks<<endl;

cout<<"Rollno of Topper:"<<c.rollNo;
return 0;
}