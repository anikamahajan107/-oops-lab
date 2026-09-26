#include<iostream>
#include<string>
using namespace std;
class Book{
    public:
    string title;
    int bookId;
    int number_of_copies;;
    
    void exchange(Book & other){
       Book temp;
       temp=*this;
         *this=other;
        other=temp;
    }
    };

Book moreCopies(Book b1,Book b2){

    if(b1.number_of_copies>b2.number_of_copies)
        return b1;
 else
        return b2;
       
}
int main(){
Book b1,b2,result;
cout<<"Enter the details of book 1:"<<endl;
cout<<"Enter the title of book 1:"<<endl;
getline(cin,b1.title);
cout<<"Enter the book ID of book 1:"<<endl;
cin>>b1.bookId;
cout<<"Enter the number of copies of book 1:"<<endl;
cin>>b1.number_of_copies;
cout<<"Enter the details of book 2:"<<endl;
cout<<"Enter the title of book 2:"<<endl;
cin.ignore();
getline(cin,b2.title);
cout<<"Enter the book ID of book 2:"<<endl;
cin>>b2.bookId;
cout<<"Enter the number of copies of book 2:"<<endl;
cin>>b2.number_of_copies;
b1.exchange(b2);
cout<<"After exchanging the details of book 1 and book 2:"<<endl;
cout<<"Book 1:"<<endl;
cout<<"Title:"<<b1.title<<endl;
cout<<"BookId:"<<b1.bookId<<endl;
cout<<"Number of copies:"<<b1.number_of_copies<<endl;
cout<<"Book 2:"<<endl;
cout<<"Title:"<<b2.title<<endl;
cout<<"BookId:"<<b2.bookId<<endl;
cout<<"Number of copies:"<<b2.number_of_copies<<endl;
result=moreCopies(b1,b2);
cout<<"Book with more copies:"<<endl;
cout<<"Title:"<<result.title<<endl;
cout<<"BookId:"<<result.bookId<<endl;
cout<<"Number of copies:"<<result.number_of_copies<<endl;
return 0;
}