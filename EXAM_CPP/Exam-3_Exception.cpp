#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char error[20] = "Cannot Divide by ZERO";

    cout << "Enter Number of A:";
    cin >> a;
    cout << "Enter Number of B:";
    cin >> b;

    try
    {
        if (b == 0)
        {
            throw error;
        }
        else
        {
            cout << a << "/" << b << "=" << a / b;
        }
    }
    catch (char e[])
    {
        cout << e;
    }
    return 0;
}