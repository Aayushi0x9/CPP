#include <iostream>
#include <string.h>
using namespace std;

class Admin
{
private:
    int total_annual_revenue;

protected:
    int manager_salary;
    int total_staff;

public:
    int employee_salary;
    char company_name[20];
};

class Manager : private Admin
{
    void MyAcess()
    {
        cin >> manager_salary;
        cin >> total_staff;

        cout << "employee salary : ";
        cin >> employee_salary;

        cout << "Enter company name : ";
        cin >> company_name;
    }

public:
    int emp_salary;
    char cmp_name[20];
};

class Employee : public Manager
{
public:
    void MyAcess()
    {

        cout << "employee slary : " << emp_salary;
        cout << "company name : " << cmp_name;
        ;
    }
};

int main()
{
    Manager m1;
    Employee e1;
}