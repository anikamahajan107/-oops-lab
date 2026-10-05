#include <iostream>
using namespace std;


template <class T>
T larger(T a, T b)
{
    return (a > b) ? a : b;
}


template <class T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    
    int a = 10, b = 20;
    cout<<"For Int:"<<endl;
    cout << "Larger int = " << larger(a, b) << endl;
    swapValues(a, b);
    cout << "After swapping int = " << a << " " << b << endl;

    
    float x = 5.5f, y = 2.2f;
     cout<<"For Float:"<<endl;
    cout << "Larger float = " << larger(x, y) << endl;
    swapValues(x, y);
    cout << "After swapping float = " << x << " " << y << endl;

    
    double p = 15.75, q = 25.50;
     cout<<"For Double:"<<endl;
    cout << "Larger double = " << larger(p, q) << endl;
    swapValues(p, q);
    cout << "After swapping double = " << p << " " << q << endl;

    
    char c1 = 'A', c2 = 'Z';
     cout<<"For Char:"<<endl;
    cout << "Larger char = " << larger(c1, c2) << endl;
    swapValues(c1, c2);
    cout << "After swapping char = " << c1 << " " << c2 << endl;

    return 0;
}