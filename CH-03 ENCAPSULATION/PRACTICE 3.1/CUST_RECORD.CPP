// Write a Program to create a Customer Record System for 5 customers using Encapsulation.
// Consider the below-mentioned attributes in the Customer structure:

#include <iostream>
#include <string.h>
using namespace std;

class CUST_RECORD
{
    int id, age,valid;
    char name[20],city[10],number[10], brand[10];

public:
    void setcustData()
    {
        cout << endl
             << "Customer ID \t: ";
        cin >> this->id;
        fflush(stdin);
        cout << "Customer name\t: ";
        gets(this->name);
        cout << "Customer age\t: ";
        cin >> this->age;
        fflush(stdin);
        cout << "Customer City\t: ";
        gets(this->city);
        cout << "Customer Mobile number  : ";
        gets(this->number);
        cout << "Customer Simcard validity(year)\t: ";
        cin>>this->valid;
        fflush(stdin);
        cout << "Customer telephone brand name(Jio, Airtel, Vi...)\t: ";
        gets(this->brand);
        cout << endl;
    }

    void getcustData()
    {
        cout << endl
             << "Customer ID \t: " << this->id << endl
             << "Customer Name \t: " << this->name << endl
             << "Customer Age \t: " << this->age << endl
             << "Customer city \t: " << this->city << endl
             << "Customer mobile number: " << this->number << endl
             << "Customer simcard validity \t: " << this->valid << endl
             << "telephone brand name\t: " << this->brand<< endl
             << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of Customer : ";
    cin >> n;

    CUST_RECORD c[n];

    cout << endl
         << "Enter Customers Details... " << endl;

    // input
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "\tcutomer " << i + 1 << " : " << endl;
        c[i].setcustData();
    }

    // output
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "\tCustomer " << i + 1 << " : " << endl;
        c[i].getcustData();
    }

    return 0;
}