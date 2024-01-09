// Write a Program to get and display N numbers of Hotels and static information using
// Encapsulation with an array of objects member by including the below-mentioned attributes:
#include <iostream>
#include <string.h>
using namespace std;

class HOTEL_RECORD
{
    int id, year, rate, staff, room;
    char type[5], city[10], location[10];
    static char name[20];

public:
    void setHotelData()
    {
        cout << endl
             << "Hotel ID\t\t\t\t: ";
        cin >> this->id;
        fflush(stdin);
        cout << "Hotel name\t\t\t\t: ";
        gets(this->name);
        cout << "Hotel type (like hotel or motel)\t: ";
        gets(this->type);
        cout << "Hotel rating(like 1 Star,2 Start...,7 Star): ";
        cin >> this->rate;
        fflush(stdin);
        cout << "Hotel location(city name)\t\t: ";
        gets(this->location);
        cout << "Hotel Establish Year\t\t\t: ";
        cin >> this->year;
        cout << "Hotel staff Quantity\t\t\t: ";
        cin >> this->staff;
        cout << "Hotel Room Quantity\t\t\t: ";
        cin >> this->room;
        cout << endl;
    }

    void getHotelData()
    {
        cout << endl
             << "Hotel ID \t\t\t\t: " << this->id << endl
             << "Hotel name\t\t\t\t: " << name << endl
             << "Hotel type (like hotel or motel)\t: " << this->type << endl
             << "Hotel rating(like 1 Star,2 Start...,7 Star): " << this->rate << endl
             << "Hotel location(city name)\t\t: " << this->location << endl
             << "Hotel Establish Year\t\t\t:  " << this->year << endl
             << "Hotel staff Quantity\t\t\t: " << this->staff << endl
             << "Hotel Room Quantity\t\t\t: " << this->room << endl
             << endl;
    }
};

char HOTEL_RECORD::name[20] = "HOTEL DIAMOND26";

int main()
{
    int n;
    cout << "Enter number of Hotels : ";
    cin >> n;

    HOTEL_RECORD h[n];

    cout << endl
         << "Enter Hotel Details... " << endl;

    // input
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "\tHotel " << i + 1 << " : " << endl;
        h[i].setHotelData();
    }

    // output
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "\tHotel " << i + 1 << " : " << endl;
        h[i].getHotelData();
    }
    return 0;
}
