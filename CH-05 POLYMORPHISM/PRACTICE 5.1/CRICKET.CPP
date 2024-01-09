// Write a Program to implement method overriding by following the below-mentioned criteria
#include <iostream>
using namespace std;

class Cricket
{
public:
    void getTotalover()
    {
        cout << "50 Overs!!";
    }
};

class T20Match : public Cricket
{
public:
    void getTotalover()
    {
        cout << "20 !!";
    }
};

class TestMatch : Cricket
{
public:
    void getTotalover()
    {
        cout << "90 Overs!!";
    }
};

int main()
{
    T20Match t20;
    t20.getTotalover();

    TestMatch test;
    test.getTotalover();

    return 0;
}
