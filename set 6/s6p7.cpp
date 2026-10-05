  #include <iostream>
using namespace std;

int main()
{
    int a, b, choice;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\n1. Addition";
    cout << "\n2. Subtraction";
    cout << "\n3. Multiplication";
    cout << "\n4. Division";
    cout << "\nEnter choice: ";
    cin >> choice;

    try
    {
        switch(choice)
        {
            case 1:
                cout << "Result = " << a + b;
                break;

            case 2:
                cout << "Result = " << a - b;
                break;

            case 3:
                cout << "Result = " << a * b;
                break;

            case 4:
                if(b == 0)
                    throw 1;       // integer exception
                cout << "Result = " << a / b;
                break;

            default:
                throw 'x';         // character exception
        }
    }

    catch(int)
    {
        cout << "Division by Zero Error.";
    }

    catch(char)
    {
        cout << "Invalid Operator.";
    }

    return 0;
}