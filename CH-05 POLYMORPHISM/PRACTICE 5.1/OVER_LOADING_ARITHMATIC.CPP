// Write a Program to perform all basic arithmetic. operations such as +, -, *, and /
// operations by implementing method overloading using 2 classes.
#include <iostream>
using namespace std;
class Arithmatic
{

public:
    void calculate(int n1, int n2)
    {
        cout << endl
             << "Addition of two numbers is : " << n1 / n2;
    }

    void calculate(int n1, int n2, int n3)
    {
        cout << endl
             << "subtraction of three numbers is : " << n1 - n2 - n3;
    }

    void calculate(int n1, int n2, int n3, int n4)
    {
        cout << endl
             << "Multiplication of four numbers is : " << n1 * n2 * n3 * n4;
    }

    void calculate(int n1, int n2, int n3, int n4, int n5)
    {
        cout << endl
             << "Addition of five numbers is : " << n1 + n2 + n3 + n4 + n5;
    }
};

int main()
{
    Arithmatic a;
    a.calculate(9, 9);
    a.calculate(9, 9, 9);
    a.calculate(9, 9, 9, 9);
    a.calculate(9, 9, 9, 9, 9);

    return 0;
}
