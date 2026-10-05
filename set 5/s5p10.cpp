
#include<iostream>
#include<string>
using namespace std;
class Person{
    protected:
    string name;
    int age;
     
     public:
     Person(string n,int a){
         name=n;
         age=a;
     }
   void displayPerson(){
    
    cout<<"Name = "<<name<<endl;
    cout<<"Age = "<<age<<endl;
    
}
};

class Teacher :public Person{
    private:
    string subject;
    
public:
Teacher (string n,int a,string s):Person (n,a)
{
    subject=s;
    }

void display(){
    cout<<"Teacher Record : "<<endl;
   displayPerson();
    cout<<"Subject = "<<subject<<endl;
    cout<<endl;
}
};
class ResearchScholar :public Person{
    private:
    string research_topic;
    
  public:
  ResearchScholar (string n,int a,string t):Person (n,a)
   {
    research_topic=t;
    }

    void display(){
    cout<<"Research Scholar Record : "<<endl;
    displayPerson();
    cout<<"Research Topic : "<<research_topic<<endl;
    
}
};

template <class T>
class RecordManager
{
private:
    T record;

public:
    RecordManager(T r):record(r)
    {
        
    }
    

    void displayRecord()
    {
        record.display();
    }
};


int main()
{
    Teacher t("Abhishek", 35, "C++");

    ResearchScholar r("Sanya", 24, "Quantum Computing");


    RecordManager<Teacher> teacherRecord(t);

    RecordManager<ResearchScholar> scholarRecord(r);


    teacherRecord.displayRecord();

    scholarRecord.displayRecord();

    return 0;
}