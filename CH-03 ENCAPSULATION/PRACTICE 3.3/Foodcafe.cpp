// Write a Program to get and display N numbers of Fast Food cafe information using
// encapsulation and the use of a Default constructor
#include <iostream>
#include <string.h>
using namespace std;

class Foodcafe
{
    int id, rate, year, staff;
    char name[20], type[7], location[10];

public:
    Foodcafe()
    {
        setCafe();
        getCafe();
    }

    void setCafe()
    {
        cout << endl
             << "Enter Cafe ID : ";
        cin >> this->id;
        cout << "Enter Cafe name : ";
        fflush(stdin);
        gets(this->name);
        cout << "Enter Cafe Type(like a rooftop and normal) : ";
        gets(this->type);
        cout << "Enter Cafe Rating(like 1-star to 5-star) : ";
        cin >> this->rate;
        cout << "Enter Cafe Location(city): ";
        fflush(stdin);
        gets(this->location);
        cout << "Enter Cafe Established year : ";
        cin >> this->year;
        cout << "Enter Staff Quantity : ";
        cin >> this->staff;
        cout << endl
             << endl;
    }
    void getCafe()
    {
        cout << "Cafe ID : " << id << endl;
        cout << "Cafe Name : " << name << endl;
        cout << "Cafe Type : " << type << endl;
        cout << "Cafe Rate : " << rate << endl;
        cout << "Cafe Location : " << location << endl;
        cout << "Cafe Established year : " << year << endl;
        cout << "Cafe Saff Quantity : " << staff << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of cafe : ";
    cin >> n;

    int c[n];

    // output
    for (int i = 0; i <= n; i++)
    {
        Foodcafe c[i];
    }

    return 0;
}