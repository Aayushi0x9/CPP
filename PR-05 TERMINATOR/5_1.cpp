// Write a Program to create a class that illustrates the concept of handling all types of exceptions using general exceptions.
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    string error = "Cannot devide by ZERO";

    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;

    try
    {
        if (b == 0)
        {
            throw error;
        }
        else
        {
            throw a / b;
        }
    }
    catch (string e)
    {
        cout << e;
    }
    catch (int e)
    {
        cout << "int : " << a / b;
    }
    catch (...)
    {
        cout << "General Exception";
    }

    return 0;
}