// Write a Program to overload < operator to find which object
// contains a higher value from given 2 numbers.

#include <iostream>
using namespace std;

class overload_op
{
    int n;

public:
    void setInput()
    {
        cout << "Enter any number : ";
        cin >> n;
    }

    bool operator<(overload_op b1)
    {

        if (this->n < b1.n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    overload_op a, b;

    a.setInput();
    b.setInput();

    if (a < b)
    {
        cout << "b is big";
    }
    else
    {
        cout << "a is big";
    }

    return 0;
}
