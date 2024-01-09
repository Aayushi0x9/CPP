// Write a Program to read and print Employee information with the use of Multilevel inheritance

#include <iostream>
using namespace std;

class Employee
{
protected:
    int id, salary, exp, contact;
    char name[20], role[20], comp[20], address[20], email[20];

public:
    void emp()
    {
        cout << "Enter Employee id:";
        cin >> id;
        fflush(stdin);
        cout << "Enter Empolyee name:";
        cin >> name;
        cout << "Enter Employee role:";
        cin >> role;
    }
};

class HR : public Employee
{
public:
    void hr()
    {
        cout << "Enter HR salary:";
        cin >> salary;
        cout << "Enter HR experience:";
        cin >> exp;
    }
};

class MANAGER : public HR
{
public:
    void Manager()
    {
        cout << "Enter company name:";
        fflush(stdin);
        cin >> comp;
        cout << "Enter address:";
        cin >> address;
        cout << endl;

        cout << endl
             << "Name : " << name << endl
             << "Role : " << role << endl
             << "Salary : " << salary << endl;
    }
};

class CA : public MANAGER
{
public:
    void ca()
    {
        cout << endl
             << "Enter email :";
        cin >> email;
        cout << "Enter contact number:";
        cin >> contact;

        cout << endl
             << "Id : " << id << endl
             << "Name : " << name << endl
             << "Role : " << role << endl
             << "Salary : " << salary << endl
             << "Experience : " << exp << endl
             << "Company name : " << comp << endl
             << "Address" << address << endl
             << "Email : " << email << endl
             << "Contact : " << contact << endl;
    }
};

int main()
{
    CA i;
    i.emp();
    i.hr();
    i.Manager();
    i.ca();

    MANAGER m;
    m.emp();
    m.hr();
    m.Manager();

    HR h;
    h.emp();
    h.hr();

    Employee e;
    e.emp();

    return 0;
}