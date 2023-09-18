#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string way;

    cout << "Input way to txt file: ";
    cin >> way;

    ifstream buffer;
    buffer.open(way);

    bool isOpen = buffer.is_open();
    const bool isConstOpen = buffer.is_open();

    while (!isOpen)
    {
        cerr << "Wrong way! Try again\n";
        cout << "Input way to txt file: ";
        cin >> way;

        buffer.open(way);
        isOpen = buffer.is_open();
    }

    vector<string> file(1, "");

    int count = 0;

    while (!buffer.eof())
    {
        if (count >= file.size())
        {
            file.push_back("");
        }

        getline(buffer, file[count]);
        count++;
    }
    
    for (int i = 0; i < file.size(); i++)
    {
        cout << file[i] << "\n";
    }

    cout << "\n";
    buffer.close();
    system("pause");
}