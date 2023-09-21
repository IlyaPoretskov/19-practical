#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string questions[13];
    string answers[13];

    ifstream bank;
    bank.open("Answers.txt");

    for (int i = 0; i < 13; i++)
    {
        getline(bank, questions[i]);
        getline(bank, answers[i]);
    }
    bank.close();

    int currentQuestion = 0;
    string currentAnswer;
    int shift;

    while (true)
    {
        cout << "\nInput question shift: ";
        cin >> shift;
        currentQuestion = (currentQuestion + shift) % 12;

        cout << questions[currentQuestion] << endl;
        cin >> currentQuestion;

        if (currentAnswer == answers[currentQuestion])
        {
            cout << "Right answer!\n";
        } else {
            cout << "Wrong answer!\n";
        }
    }
    
}