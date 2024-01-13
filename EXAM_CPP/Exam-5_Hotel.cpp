#include <iostream>
#include <string.h>
using namespace std;

class Hotel
{
public:
    HotelData(int num, char name[20], char type[5], int rate, char location[10])
    {
        cout << endl
             << "Hotel Number\t\t\t\t: " << this->id << endl
             << "Hotel name\t\t\t\t: " << name << endl
             << "Hotel type (like hotel or motel)\t: " << this->type << endl
             << "Hotel rating : " << this->rate << endl
             << "Hotel location(city)\t\t: " << this->location << endl
             << endl;
    }
};

int main()
{
    int n, num, rate;
    char type[5], location[10];
    static char name[20];

    cout << "Enter Hotel of Number : ";
    cin >> n;
    cout << endl
         << "Enter Hotel Details... " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "Hotel Number : ";
        cin >> this->num;
        fflush(stdin);
        cout << "Hotel name\t\t\t\t: ";
        gets(this->name);
        cout << "Hotel type (like hotel or motel)\t: ";
        gets(this->type);
        cout << "Hotel Rating(1,2,3...,7)\t\t\t: ";
        cin >> this->rate;
        fflush(stdin);
        cout << "Hotel location(city name)\t\t: ";
        gets(this->location);
        cout << endl;

        Hotel h(num, name, type, rate, location);
    }
    return 0;
}