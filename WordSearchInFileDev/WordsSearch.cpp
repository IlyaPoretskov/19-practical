#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream bank;
    bank.open("Words.txt");

    string array[50];
    int count = 0;

    while (!bank.eof())
    {
        bank >> array[count];
        count++;
    }

    cout << "Input string that need to find: ";
    string str;
    cin >> str;

    int string_counter = 0;

    for (int i = 0; i < count; i++)
    {
        if (array[i] == str)
        {
            string_counter++;
        }
    }
    cout << "Result: " << string_counter << endl;
    system("pause");
    bank.close();
}