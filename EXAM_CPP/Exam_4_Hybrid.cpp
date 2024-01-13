#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    void set1()
    {
        cout << "Enter Number of A : ";
        cin >> a;
    }
};

class B : public A
{
protected:
    int b;

public:
    void set2()
    {
        cout << "Enter Number of B : ";
        cin >> b;
    }
};

class C : public A
{
protected:
    int c;

public:
    void set3()
    {
        cout << "Enter Number of C : ";
        cin >> c;
    }
};

class D : public B, public C
{
protected:
    int d;

public:
    void set4()
    {
        cout << "Enter Number of D : ";
        cin >> d;
    }

    getSum()
    {
        cout << a << " + " << b<< " + " << c << " + " << d << " = " << a + b + c + d;
    }
};

int main()
{

    D n;
    n.B::set1();
    n.set2();
    n.set3();
    n.set4();
    n.getSum();
}