// Write a Program to create a class to read and add two distances

#include <iostream>
using namespace std;

int main()
{
     int feet, inch, feet1, feet2, inch1, inch2;

     cout << "--------: Input1 :--------" << endl
          << "Feet :  ";
     cin >> feet1;
     cout << "inch : ";
     cin >> inch1;
     cout << endl
          << "--------: Input2 :--------" << endl
          << "Feet :  ";
     cin >> feet2;
     cout << "inch : ";
     cin >> inch2;

     inch = (inch1 + inch2) % 12;
     feet = feet1 + feet2 + ((inch1 + inch2) / 12);

     cout << endl
          << "Feet : " << feet << " inch : " << inch;

     return 0;
}
