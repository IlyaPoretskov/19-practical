#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream bank;
    bank.open("Statement.txt");
    string names[10];
    string surnames[10];
    string dates[10];
    unsigned int money[10];

    for (int i = 0; i < 40; i++)
    {
        bank >> names[i];
        bank >> surnames[i];
        bank >> money[i];
        bank >> dates[i];
    }
    
    unsigned int max = 0, count = 0;

    for (int i = 0; i < 10; i++)
    {
        if (money[i] >= money[max])
        {
            max = i;
        }
        count += money[i];
    }
    
    cout << "Total money: " << count << endl;
    cout << "Person with maximal payment: " << names[max] << " " << surnames[max] << endl;
    bank.close();
    system("pause");
}