#include <iostream>
#include<string>
using namespace std;

class Student
{ private:
string name;
    int age;
  int marks[5];
  int totalMarks;
  int sum=0;
  double percentage;
  char grade;    //global
    public:
    Student()
    {
        cout<<"Name of Student:"<<endl;
       getline(cin,name);
        
        cout<<"Age of Student:"<<endl;
        cin>>age;
        
        cout<<"Total Marks:"<<endl;
        cin>>totalMarks;
        
        cout<<"Marks scored by student:"<<endl;
        for(int i=0;i<5;i++)
        {
         cin>> marks[i];
        }
    }
    
    void calc(){
    
    for(int i=0;i<5;i++){
        sum =sum+marks[i];
          }
          percentage=(double) sum/totalMarks * 100;
}
void studentGrade(){

 grade = (percentage >= 90) ? 'A' :                    //ternary operator
                 (percentage >= 75) ? 'B' :
                 (percentage >= 60) ? 'C' :
                 (percentage >= 40) ? 'D' : 'F';

}

void displayDetails()
{
    cout<<"Total marks scored by student:"<<sum<<endl;
    cout<<"Percentage of student:"<<percentage<<endl;
    cout<<"Grade of Student:"<<grade;
}
};

int main()
{
    Student s1;
    s1.calc();
    s1.studentGrade();
    s1.displayDetails();
}
