//Write a Program to find leap years between two given numbers and store them in an array. And then print that array.

#include <iostream>
using namespace std;

int main()
{
    int fy, ey, i;

    cout << "Enter the first & end year: " << endl;

    cin >> fy >> ey;

    int a[ey - fy], size = 0;

    for (i = fy; i <= ey; i++)
    {
        if (i % 4 == 0)
        {
            a[size] = i;
            size++;
        }
    }

    cout << "Leapyear is : " << endl;
    for (i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }
    return 0;
}