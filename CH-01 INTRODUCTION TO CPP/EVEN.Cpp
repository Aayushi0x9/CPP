// Write a Program to find all even elements from a given 1D array.

#include <iostream>
using namespace std;

int main()
{
    int size, i;

    cout << "Enter array size : ";

    cin >> size;

    int a[size], count = 1;

    for (i = 0; i < size; i++)
    {
        cout << "~~~~>\ta[" << i << "] : ";
        cin >> a[i];
    }

    cout << "array even element is : " << endl;
    for (i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout << "=======>\t" << a[i] << endl;
        }
    }

    return 0;
}