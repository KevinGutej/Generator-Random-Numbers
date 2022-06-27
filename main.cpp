#include <iostream>
#include <time.h>
#include <windows.h>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    int number_of,range;
    cout << "How many times would you like to roll the dice? " << endl;
    cout << "Enter a integer number: ";
    cin >> number_of;
    vector<int>outcome;
    outcome.resize(number_of);
    cout << "What is the maximum number on your dice? " << endl;
    cout << "Enter a integer number: ";
    cin >> range;
    for(int i=0;i<outcome.size();i++)
    {
        outcome[i] = rand()%range+1;
    }
    cout << "Outcomes: " << endl;
    cout << endl;
    for(int i=0;i<outcome.size();i++)
    {
        cout << "Dice roll number " << i + 1 << ": " << outcome[i] << endl;
    }
    system("pause");
}
