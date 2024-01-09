// Write a Program to get and display N numbers of Diamond companies information using encapsulation and use of Parameterised Constructor
#include <iostream>
#include <string.h>
using namespace std;

class Diamondcompany
{
private:
    int id, staff, revenue, import_dia, export_dia;
    char name[20], ceo[20];

public:
    Diamondcompany(int id, char name[], int staff, int revenue, int import_dia, int export_dia, char ceo[])
    {
        this->id = id;
        strcpy(this->name, name);
        this->staff = staff;
        this->revenue = revenue;
        this->import_dia = import_dia;
        this->export_dia = export_dia;
        strcpy(this->ceo, ceo);
    }

    void getcompany()
    {
        cout << endl
             << "Company ID : " << id << endl;
        cout << "Company Name : " << name << endl;
        cout << "Company Staff Quantity : " << staff << endl;
        cout << "Company Revenue(per Year) : " << revenue << endl;
        cout << "Company Import raw Diamonds(per year) : " << import_dia << endl;
        cout << "Company Export Diamonds(no. of Diamonds per year) : " << export_dia << endl;
        cout << "Comapny CEO : " << ceo << endl;
    }
};

int main()
{

    Diamondcompany c1(101, "Sparkling star", 100, 1000000, 800, 1000, "Raj mori");
    Diamondcompany c2(102, "Glowing gems", 200, 2000000, 900, 1000, "Karan Ravaliya");
    Diamondcompany c3(103, "brighter diamond", 300, 3000000, 1000, 1500, "Kuldeep Gabhani");

    c1.getcompany();
    c2.getcompany();
    c3.getcompany();
    return 0;
}