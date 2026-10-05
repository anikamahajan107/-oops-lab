#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    ifstream file("article.txt");

    if (!file)
    {
        cout << "File could not be opened." << endl;
        return 1;
    }

    string line, word;
    int characters = 0;
    int words = 0;
    int lines = 0;

    while (getline(file, line))
    {
        lines++;

        
        characters += line.length();

        
        stringstream ss(line);

        while (ss >> word)
        {
            words++;
        }
    }

    file.close();

    cout << "Characters: " << characters << endl;
    cout << "Words: " << words << endl;
    cout << "Lines: " << lines << endl;

    return 0;
}