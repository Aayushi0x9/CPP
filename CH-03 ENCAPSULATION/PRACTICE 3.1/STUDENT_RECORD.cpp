// Write a Program to create Student Record System for 5 students using Encapsulation
// Consider the below-mentioned attributes in the Student class:

#include <iostream>
#include <string.h>
using namespace std;

class STUDENT_RECORD
{
    int s_id, s_age;
    char s_name[20], s_cource[15], s_email[20], s_city[10], s_clg[20];

public:
    void setStudentData()
    {
        cout << endl
             << "Student ID \t: ";
        cin >> this->s_id;
        fflush(stdin);
        cout << "Student name\t: ";
        gets(this->s_name);
        cout << "Stuent age\t: ";
        cin >> this->s_age;
        fflush(stdin);
        cout << "Stuent Course\t: ";
        gets(this->s_cource);
        cout << "Stuent Collage  : ";
        gets(this->s_clg);
        cout << "Stuent City\t: ";
        gets(this->s_city);
        cout << "Stuent Email\t: ";
        gets(this->s_email);
        cout << endl;
    }

    void getStudentData()
    {
        cout << endl
             << "Student ID \t: " << this->s_id << endl
             << "Student Name \t: " << this->s_name << endl
             << "Student Age \t: " << this->s_age << endl
             << "Student Course \t: " << this->s_cource << endl
             << "Student Collage : " << this->s_clg << endl
             << "Student City \t: " << this->s_city << endl
             << "Student Email \t: " << this->s_email << endl
             << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of Students : ";
    cin >> n;

    STUDENT_RECORD s[n];

    cout << endl
         << "Enter Students Details... " << endl;

    // input
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "\tStudent " << i + 1 << " : " << endl;
        s[i].setStudentData();
    }

    // output
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "\tStudent " << i + 1 << " : " << endl;
        s[i].getStudentData();
    }
    // s[1].getStudentData();

    return 0;
}
