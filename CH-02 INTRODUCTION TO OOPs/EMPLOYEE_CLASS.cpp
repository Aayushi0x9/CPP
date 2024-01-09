/*Write a Program to create an Employee Record System using the Class & Object
of any 5 employees. Consider the below-mentioned attributes in the Employee class:*/

#include <iostream>
#include <string.h>
using namespace std;

class EMPLOYEE
{
public:
     int e_id, e_age, e_exp;
     char e_name[20], e_role[10], e_city[10], e_cmpy_name[15];
     double e_salary;
};
int main()
{
     EMPLOYEE e1, e2, e3, e4, e5;
     cout << "Enter Employee Details... " << endl;
     cout << endl
          << "\t\tEMPLOYEE 1 : " << endl
          << "Employee ID \t\t: ";
     cin >> e1.e_id;
     fflush(stdin);
     cout << "Employee Name \t\t: ";
     gets(e1.e_name);
     cout << "Employee Age \t\t: ";
     cin >> e1.e_age;
     fflush(stdin);
     cout << "Employee Role\t\t: ";
     gets(e1.e_role);
     cout << "Employee Salary\t\t: ";
     cin >> e1.e_salary;
     fflush(stdin);
     cout << "Employee City\t\t: ";
     gets(e1.e_city);
     cout << "Employee Experience     : ";
     cin >> e1.e_exp;
     fflush(stdin);
     cout << "Employee Company name   : ";
     gets(e1.e_cmpy_name);

     // emp 2
     cout << endl
          << "EMPLOYEE 2 : " << endl
          << "Employee ID \t\t: ";
     cin >> e2.e_id;
     fflush(stdin);
     cout << "Employee Name \t\t: ";
     gets(e2.e_name);
     cout << "Employee Age \t\t: ";
     cin >> e2.e_age;
     fflush(stdin);
     cout << "Employee Role:\t\t";
     gets(e2.e_role);
     cout << "Employee Salary\t\t: ";
     cin >> e2.e_salary;
     fflush(stdin);
     cout << "Employee City\t\t: ";
     gets(e2.e_city);
     cout << "Employee Experience     : ";
     cin >> e2.e_exp;
     fflush(stdin);
     cout << "Employee Company name   : ";
     gets(e2.e_cmpy_name);

     // emp3
     cout << endl
          << "EMPLOYEE 3 : " << endl
          << "Employee ID \t\t: ";
     cin >> e3.e_id;
     fflush(stdin);
     cout << "Employee Name \t\t: ";
     gets(e3.e_name);
     cout << "Employee Age \t\t: ";
     cin >> e3.e_age;
     fflush(stdin);
     cout << "Employee Role\t\t:";
     gets(e3.e_role);
     cout << "Employee Salary\t\t: ";
     cin >> e3.e_salary;
     fflush(stdin);
     cout << "Employee City\t\t: ";
     gets(e3.e_city);
     cout << "Employee Experience     : ";
     cin >> e3.e_exp;
     fflush(stdin);
     cout << "Employee Company name   : ";
     gets(e3.e_cmpy_name);

     // emp 4
     cout << endl
          << "EMPLOYEE 4 : " << endl
          << "Employee ID : \t\t";
     cin >> e4.e_id;
     fflush(stdin);
     cout << "Employee Name \t\t: ";
     gets(e4.e_name);
     cout << "Employee Age \t\t: ";
     cin >> e4.e_age;
     fflush(stdin);
     cout << "Employee Role:\t\t";
     gets(e4.e_role);
     cout << "Employee Salary\t\t: ";
     cin >> e4.e_salary;
     fflush(stdin);
     cout << "Employee City\t\t: ";
     gets(e4.e_city);
     cout << "Employee Experience     : ";
     cin >> e4.e_exp;
     fflush(stdin);
     cout << "Employee Company name   : ";
     gets(e4.e_cmpy_name);

     // emp5
     cout << endl
          << "EMPLOYEE 5 : " << endl
          << "Employee ID \t\t: ";
     cin >> e5.e_id;
     fflush(stdin);
     cout << "Employee Name \t\t: ";
     gets(e5.e_name);
     cout << "Employee Age \t\t: ";
     cin >> e5.e_age;
     fflush(stdin);
     cout << "Employee Role\t\t: ";
     gets(e5.e_role);
     cout << "Employee Salary\t\t: ";
     cin >> e5.e_salary;
     fflush(stdin);
     cout << "Employee City\t\t: ";
     gets(e5.e_city);
     cout << "Employee Experience     : ";
     cin >> e5.e_exp;
     fflush(stdin);
     cout << "Employee Company name   : ";
     gets(e5.e_cmpy_name);

     // EMP1
     cout << endl
          << "\t\tEMPLOYEE 1 : " << endl
          << "Employee ID \t\t: " << e1.e_id << endl;
     cout << "Employee Name \t\t: " << e1.e_name << endl;
     cout << "Employee Age \t\t: " << e1.e_age << endl;
     cout << "Employee Role\t\t: " << e1.e_role << endl;
     cout << "Employee Salary\t\t: " << e1.e_salary << endl;
     cout << "Employee Experience     : " << e1.e_exp << endl;
     cout << "Employee Company Name   : " << e1.e_cmpy_name << endl;
     cout << endl;

     // EMP2
     cout << endl
          << "\t\tEMPLOYEE 2 : " << endl
          << "Employee ID \t\t: " << e2.e_id << endl;
     cout << "Employee Name \t\t: " << e2.e_name << endl;
     cout << "Employee Age : \t\t" << e2.e_age << endl;
     cout << "Employee Role\t\t: " << e2.e_role << endl;
     cout << "Employee Salary\t\t: " << e2.e_salary << endl;
     cout << "Employee Experience     : " << e2.e_exp << endl;
     cout << "Employee Company Name   : " << e2.e_cmpy_name << endl;
     cout << endl;

     // EMP3
     cout << endl
          << "\t\tEMPLOYEE 3 : " << endl
          << "Employee ID \t\t: " << e3.e_id << endl;
     cout << "Employee Name \t\t: " << e3.e_name << endl;
     cout << "Employee Age \t\t: " << e3.e_age << endl;
     cout << "Employee Role\t\t: " << e3.e_role << endl;
     cout << "Employee Salary\t\t: " << e3.e_salary << endl;
     cout << "Employee Experience     : " << e3.e_exp << endl;
     cout << "Employee Company Name   : " << e3.e_cmpy_name << endl;
     cout << endl;

     // EMP4
     cout << endl
          << "\t\tEMPLOYEE 4 : " << endl
          << "Employee ID \t\t: " << e4.e_id << endl;
     cout << "Employee Name \t\t: " << e4.e_name << endl;
     cout << "Employee Age \t\t: " << e4.e_age << endl;
     cout << "Employee Role\t\t: " << e4.e_role << endl;
     cout << "Employee Salary\t\t: " << e4.e_salary << endl;
     cout << "Employee Experience     : " << e4.e_exp << endl;
     cout << "Employee Company Name   : " << e4.e_cmpy_name << endl;
     cout << endl;

     // EMP5
     cout << endl
          << "\t\tEMPLOYEE 5 : " << endl
          << "Employee ID \t\t: " << e5.e_id << endl;
     cout << "Employee Name \t\t: " << e5.e_name << endl;
     cout << "Employee Age \t\t: " << e5.e_age << endl;
     cout << "Employee Role\t\t: " << e5.e_role << endl;
     cout << "Employee Salary\t\t: " << e5.e_salary << endl;
     cout << "Employee Experience     : " << e5.e_exp << endl;
     cout << "Employee Company Name   : " << e5.e_cmpy_name << endl;
     cout << endl;
}
