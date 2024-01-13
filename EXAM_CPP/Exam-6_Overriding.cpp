#include<iostream>
using namespace std;

class Cricket
{
    int over;
    public:
    void set()
    {
        cout << "Enter 50 over match Runs :";
        cin >> over;
        cout << "5O overs match runs : " << over;
    }
};

class Testmatch : public Cricket
{
    int Test;
    public:
    void set()
    {
        cout << "Enter Testmatch Runs :";
        cin >> Test;
        cout << "Test match over Runs :" << Test;
    }
};

int main()
{
    Testmatch t;

    t.set();

    return 0;
}