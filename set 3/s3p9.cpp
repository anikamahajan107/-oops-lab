#include <iostream>
#include <string>
using namespace std;

class Product
{
    string name;
    float price;
    int quantity;

public:

    Product(string n = "", float p = 0, int q = 0)
    {
        name = n;
        price = p;
        quantity = q;
    }

    float totalValue()
    {
        return price * quantity;
    }

    Product combine(Product p)
    {
        Product temp;

        temp.name = name + " + " + p.name;
        temp.quantity = quantity + p.quantity;

    
        temp.price = (price + p.price) / 2;

        return temp;
    }

    void display()
    {
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Value: " << totalValue() << endl;
    }

    friend Product higherValue(Product p1, Product p2);
};



Product higherValue(Product p1, Product p2)
{
    if (p1.totalValue() > p2.totalValue())
        return p1;
    else
        return p2;
}


int main()
{
    Product p1("Laptop", 50000, 2);
    Product p2("Mouse", 1000, 5);

    cout << "Product 1:" << endl;
    p1.display();

    cout << "\nProduct 2:" << endl;
    p2.display();

    Product higher = higherValue(p1, p2);

    cout << "\nProduct with Higher Total Value:" << endl;
    higher.display();

    Product combined = p1.combine(p2);

    cout << "\nCombined Inventory:" << endl;
    combined.display();

    return 0;
}