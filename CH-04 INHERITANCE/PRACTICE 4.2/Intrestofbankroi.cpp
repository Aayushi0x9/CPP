/* Write a Program to print the rate of interest of different banks using hierarchical inheritance:
- Class RBI -> Class SBI
- Class RBI -> Class BOB
- Class RBI -> Class ICICI
- inherit rate attribute and getROI() method in all child
classes */

#include <iostream>
using namespace std;

class RBI
{
protected:
    int inv, profit, ROI = 20;

public:
    void setter()
    {
        cout << "Enter your investment:";
        cin >> inv;
    }
    void getRoi()
    {
        profit = ((float)ROI / 100) * inv;
        cout << endl
             << "Profit = " << profit;
        cout << endl
             << "Total = " << profit + inv;
    }
};

class SBI : public RBI
{
public:
    void getRoi()
    {
        profit = ((float)ROI / 100) * inv;
        cout << endl
             << "Profit = " << profit;
        cout << endl
             << "Total = " << profit + inv;
    }
};

class BOB : public RBI
{
public:
    void getRoi()
    {
        profit = ((float)ROI / 100) * inv;
        cout << endl
             << "Profit = " << profit;
        cout << endl
             << "Total = " << profit + inv;
    }
};

class ICICI : public RBI
{
public:
    void getRoi()
    {
        profit = ((float)ROI / 100) * inv;
        cout << endl
             << "Profit = " << profit;
        cout << endl
             << "Total = " << profit + inv;
    }
};
int main()
{
    SBI s;
    BOB b;
    ICICI i;
    int n;

    cout << "Enter..." << endl
         << "\t1) SBI" << endl
         << "\t2) BOB" << endl
         << "\t3) ICICI";
    cout << "Enter Your Bank Name(like 1,2 and 3) : ";
    cin >> n;

    if (n == 1)
    {
        s.setter();
        s.getRoi();
    }
    else if (n == 2)
    {
        b.setter();
        b.getRoi();
    }
    else if (n == 3)
    {
        i.setter();
        i.getRoi();
    }
    else
    {
        cout << "Invalid Input!!";
    }

    return 0;
}