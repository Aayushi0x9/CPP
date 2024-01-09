// Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.

#include <iostream>
using namespace std;

class Input
{
protected:
    int n;
    Input()
    {
        cout << endl
             << "Enter any number : ";
        cin >> n;
    }
};

class Cube : public Input
{
public:
    void cube()
    {
        cout << "The Cube of number : " << n * n * n << endl;
    }
};

class Square : public Input
{
public:
    void square()
    {
        cout << "The square of number : " << n * n << endl;
    }
};

int main()
{

    Cube c;
    c.cube();

    Square s;
    s.square();

    return 0;
}