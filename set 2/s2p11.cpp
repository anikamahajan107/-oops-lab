#include<iostream>
#include<string>
using namespace std;
 class Library{
 private:
   
   string title;
   string author;
   float price;
   public:
   Library(){
     cout<<"Enter the details of Books:"<<endl;
     cout<<"Name:"<<endl;
    getline (cin,title);
    
     cout<<"Author:"<<endl;
    
     getline(cin,author);
     
     cout<<"Price:"<<endl;
     cin>>price;
     cin.ignore();
         }
   void displayDetails(){
     
       cout<<"Name of book:"<<title<<endl;
       cout<<"Author of book:"<<author<<endl;
       cout<<"Price of Book:"<<price<<endl;
      
       }
      // Search one book
      int search(string searchTitle)
      {
          if(title == searchTitle)
          {
              return 1;
          }
          return 0;
          }
};
 
 int main(){
     string searchTitle;
    Library obj[10];
   
    //displaying the details of books
    for(int i=0;i<10;i++)
    {cout<<"Details of books:"<<i+1<<endl;
    obj[i].displayDetails();
    }
   //searching the book 
   cout << "\nEnter book title to search: ";
   getline(cin,searchTitle);
   for(int i = 0; i < 10; i++)
   {
       if(obj[i].search(searchTitle)==1)
       {
           cout<<"Book found!"<<endl;
       obj[i].displayDetails();
       return 0;
       }
   
       cout << "Book not found!" << endl;
 

return 0;
}