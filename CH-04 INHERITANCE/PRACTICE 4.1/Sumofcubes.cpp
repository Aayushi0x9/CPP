/* Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
- Class X has the following members: a, b & c attributes in integer data type
- Class Y has the following members: setData() and getData() methods
*/
#include<iostream>
using namespace std;

class X 
{
    protected:

    int a,b,c;
};

class Y : protected X
{
    public:

    void setdata()
    {
        cout << "Enter the number of A : ";
        cin >> a;
        cout << "Enter the number of B : ";
        cin  >> b;
        cout << "Enter the number of C :";
        cin >> c;
    }

    void getdata()
    {
        cout <<endl<<"=========================" << endl;
        cout << "Sum of A,B & C Cubes : " << (a*a*a)+(b*b*b)+(c*c*c)<<endl;    
    }

};

int main()
{
    Y sum;

    sum.setdata();
    sum.getdata();

    return 0;
}