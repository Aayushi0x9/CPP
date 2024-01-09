//Write a Program to convert given string into toggle case.
#include <iostream>
using namespace std;

int main()
{
    char name[20];

    cout << endl
         << "Enter your name : ";
    cin >> name;

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] += 32;
        }
        else
        {
            name[i] -= 32;
        }
    }
    cout << "TOGGLE CASE IN YOUR NAME : " << name;

    return 0;
}