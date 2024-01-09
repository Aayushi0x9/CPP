//  Write a Program to perform four different numbers’ sum by inheriting constructors in hybrid inheritance
#include <iostream>
using namespace std;

class A
{
protected:
    int a = 10;
};

class B : protected A
{
protected:
    int b = 20;
};

class C : protected A
{
protected:
    int c = 30;
};

class D : public B, C
{
protected:
    int d = 40;

public:
    void Sum()
    {
        cout << "Sum of " << B::a << ", " << b << ", " << c << ", " << d << " = " << B::a + b + c + d;
    }
};

int main()
{
    D sum;
    sum.Sum();
    return 0;
}
