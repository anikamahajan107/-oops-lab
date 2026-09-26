#include <iostream>
using namespace std;

class Result
{
    int rollNo;
    int marks[5];

public:

    Result(int r = 0)
    {
        rollNo = r;

        for (int i = 0; i < 5; i++)
        {
            marks[i] = 0;
        }
    }

    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter marks of 5 subjects:\n";

        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    int total()
    {
        int sum = 0;

        for (int i = 0; i < 5; i++)
        {
            sum = sum + marks[i];
        }

        return sum;
    }


    Result compare(Result r)
    {
        if (total() >= r.total())
            return *this;
        else
            return r;
    }

    
    Result applyGrace()
    {
        Result temp = *this;

        int totalGrace = 0;

        for (int i = 0; i < 5; i++)
        {
            if (temp.marks[i] < 40 && totalGrace < 20)
            {
                int grace = 5;

                
                if (totalGrace + grace > 20)
                {
                    grace = 20 - totalGrace;
                }

                temp.marks[i] = temp.marks[i] + grace;
                totalGrace = totalGrace + grace;
            }
        }

        return temp;
    }

    void display()
    {
        cout << "\nRoll Number: " << rollNo << endl;

        cout << "Marks: ";

        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }

        cout << "\nTotal Marks: " << total() << endl;
    }

    friend Result topper(Result r1, Result r2, Result r3);
};

Result topper(Result r1, Result r2, Result r3)
{
    Result top = r1;

    if (r2.total() > top.total())
        top = r2;

    if (r3.total() > top.total())
        top = r3;

    return top;
}


int main()
{
    Result r1, r2, r3;

    cout << "Enter details of Student 1\n";
    r1.input();

    cout << "\nEnter details of Student 2\n";
    r2.input();

    cout << "\nEnter details of Student 3\n";
    r3.input();

    Result higher = r1.compare(r2);

    cout << "\nStudent with higher marks between Student 1 and Student 2:";
    higher.display();


    Result top = topper(r1, r2, r3);

    cout << "\nTOPPER:";
    top.display();

    Result graceResult = r1.applyGrace();

    cout << "\nResult after applying grace marks to Student 1:";
    graceResult.display();


    return 0;
}