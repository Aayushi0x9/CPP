#include <iostream>
#include <string.h>
using namespace std;

class Account
{
private:
    int num, balance, ;
    char branch[10], type[10], name[20];

public:
    void setData()
    {
        cout << "Enter Account Number : ";
        cin >> this->num;
        fflush(stdin);
        cout << "\nEnter Account Holder Name : ";
        gets(this->name);
        cout << "Enter Account Type : ";
        gets(this->type);
        cout << "Enter Branch : ";
        gets(this->branch);
        cout << "Enter Account  Balance : ";
        cin >> this->balance;
    }

    void display()
    {
        cout << "\nAccount Number : " << this->num;
        cout << "\nHolder Name : " << this->name;
        cout << "\nType of Account : " << this->type;
        cout << "\nBranch : " << this->branch;
        cout << "\nBalance in Account is : " << this->balance;
    }
};
int main()
{

    int n;
    cout << "Enter Number of Account : ";
    cin >> n;

    Account a[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = setData();
    }

    int s;
    cout << endl
         << "Enter SErarching Acccount Number : ";
    cin >> s;

    if (a[i].num == s)
    {
        a[i].getdata();
    }

    return 0;
}