#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream source("source.txt");
    ofstream destination("destination.txt");

    if (!source)
    {
        cout << "Source file could not be opened." << endl;
        return 1;
    }

    if (!destination)
    {
        cout << "Destination file could not be opened." << endl;
        return 1;
    }

    char ch;

    while (source.get(ch))
    {
        destination.put(ch);
    }

    source.close();
    destination.close();

    cout << "File copied successfully." << endl;

    return 0;
}