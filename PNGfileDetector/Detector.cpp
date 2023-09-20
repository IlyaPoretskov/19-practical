#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream bank;
    string way;
    cout << "Input file way: ";
    cin >> way;
    bank.open(way, ios::binary);

    char ext[4];

    bank.read(ext, 4);

    string ext_str = {ext[1], ext[2], ext[3]};

    if (ext_str == "PNG")
    {
        cout << "File is a PNG extension!\n";
    } else
    {
        cout << "File isn't a PNG extension\n";
    }
    bank.close();
    system("pause");
}