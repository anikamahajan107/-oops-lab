#include <iostream>
#include <string>
using namespace std;
class Book{
    string title;
    string author;
    public:
    Book(string t,string a){
        title=t;
        author=a;
    }
    void displayDetails()
    {
        cout<<"The Title and Author of Book:"<<endl;
        cout<<"Title:"<<title<<endl;
        cout<<"Author:"<<author<<endl;
    }
};
int main(){
    Book b ("War and Peace","Leo Tolstoy");

    b.displayDetails();
}