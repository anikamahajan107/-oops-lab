#include <iostream>
#include <string>
using namespace std;

class Book
{
    int bookID;
    string bookName;
    float price;

    static int totalBooks;

public:

    Book(int id, string name, float p)
    {
        bookID = id;
        bookName = name;
        price = p;

        totalBooks++;
    }


    inline float discountedPrice()
    {
        return price - (price * 10 / 100);
    }


    bool operator>(Book b)
    {
        return price > b.price;
    }

    
    friend void display(Book b);


    static void displayTotalBooks()
    {
        cout << "Total Books = " << totalBooks << endl;
    }
};


int Book::totalBooks = 0;


void display(Book b)
{
    cout << "ID: " << b.bookID << endl;
    cout << "Name: " << b.bookName << endl;
    cout << "Price: " << b.price << endl;
}

int main()
{
    Book b1(101, "C++ Programming", 500);
    Book b2(102, "C++ Programming", 700);

    cout << "Book 1 Price = 500" << endl;
    cout << "Book 2 Price = 700" << endl;

    
    if (b1 > b2)
        cout << "\nBook 1 is costlier." << endl;
    else
        cout << "\nBook 2 is costlier." << endl;

    cout << "\nCostlier Book:" << endl;

       if (b1 > b2)
        display(b1);
    else
        display(b2);


    cout << endl;
    Book::displayTotalBooks();


    if (b1 > b2)
        cout << "Discounted Price = " << b1.discountedPrice();
    else
        cout << "Discounted Price = " << b2.discountedPrice();

    return 0;
}