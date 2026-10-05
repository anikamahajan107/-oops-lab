
#include<iostream>
using namespace std;
class Book{
    protected:
    string title;
    string author;
    
    public:
    Book (string t ,string a){
    title=t;
    author=a;

    }
};

class Ebook :public Book{
    private:
    float fileSize;
    string fileFormat;


public:
Ebook (string t,string a,float size,string format):Book (t,a){
    fileSize=size;
  fileFormat=format;
    
}

void display(){
    
    cout<<"Title = "<<title<<endl;
    cout<<"Author = "<<author<<endl;
    cout<<"File size = "<<fileSize<<endl;
    cout<<"File format = "<<fileFormat<<endl;
    cout<<endl;
}
};
int main (){
    Ebook books[3]={
        Ebook("C++","B stroustrup",5.2,"PDF"),
         Ebook("DSA","S Lipschutz",6.7,"PDF"),
          Ebook("Python","Mark Lutz",8.5,"PDF"),
       
    };
    cout<<"Details of E-Books:"<<endl;
    for(int i=0;i<3;i++)
    {    cout<<"Book:"<<i+1<<endl;
        books[i].display();
    }
    
}