/* Write a Program to throw 0 if the age of the user is less than 18,
 otherwise print that you are eligible to vote.
Also, handle that thrown exception and print you are not eligible to vote.
*/
#include <iostream>
using namespace std;

int main()
{
    int age;
    string error = "You are not eligible to vote!!";

    cout << "Enter your age:";
    cin >> age;

    try
    {
        if (age < 18)
        {
            throw error;
        }
        else
        {
            cout << "You are eligible to vote!!";
        }
    }
    catch (string a)
    {
        cout << a;
    }
}