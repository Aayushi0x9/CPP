#include <iostream>
using namespace std;

int fact(int n)
{
    if (n > 1)
        return (fact(n - 1) * n);

    else
        return 1;
}

int main()
{
    int n;
    cout << "Enter factorial Number : ";
    cin >> n;
    cout << "\nFactorial of " << n << " = " << fact(n);
    return 0;
}