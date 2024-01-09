// Write a Program to create a Car Record System using the Class & Object of any 4 Cars.
// Consider the below-mentioned attributes in the Car class:

#include <iostream>
#include <string.h>
using namespace std;

class Car
{
public:
     int c_id, c_year;
     char c_name[20], c_model[10], c_colour[10];
};
int main()
{

     Car c1, c2, c3, c4;

     cout << "Enter Car Details... " << endl;
     cout << endl
          << "\tCar 1 : " << endl
          << "Car ID \t\t: ";
     cin >> c1.c_id;
     cout << "Car Company Name: ";
     gets(c1.c_name);
     cout << "Car Colour \t: ";
     cin >> c1.c_colour;
     cout << "Car Model\t: ";
     cin >> c1.c_model;
     cout << "Car Release Year: ";
     cin >> c1.c_year;

     cout << endl
          << "\tCar 2 : " << endl
          << "Car ID \t\t: ";
     cin >> c2.c_id;
     cout << "Car Company Name: ";
     gets(c2.c_name);
     cout << "Car Colour \t: ";
     cin >> c2.c_colour;
     cout << "Car Model\t: ";
     cin >> c2.c_model;
     cout << "Car Release Year: ";
     cin >> c2.c_year;

     cout << endl
          << "\tCar 3 : " << endl
          << "Car ID \t\t: ";
     cin >> c3.c_id;
     cout << "Car Company Name: ";
     gets(c3.c_name);
     cout << "Car Colour \t: ";
     cin >> c3.c_colour;
     cout << "Car Model\t: ";
     cin >> c3.c_model;
     cout << "Car Release Year: ";
     cin >> c3.c_year;

     cout << endl
          << "\tCar 4 : " << endl
          << "Car ID \t\t: ";
     cin >> c4.c_id;
     cout << "Car Company Name: ";
     gets(c4.c_name);
     cout << "Car Colour \t: ";
     cin >> c4.c_colour;
     cout << "Car Model\t: ";
     cin >> c4.c_model;
     cout << "Car Release Year: ";
     cin >> c4.c_year;

     // output

     cout << endl
          << "\tCar 1 : " << endl
          << "Car ID \t\t: " << c1.c_id << endl;
     cout << "Car Company Name: " << c1.c_name << endl;
     cout << "Car Colour \t: " << c1.c_colour << endl;
     cout << "Car Model\t: " << c1.c_model << endl;
     cout << "Car Release Year: " << c1.c_year << endl;
     cout << endl;

     cout << endl
          << "\tCar 2 : " << endl
          << "Car ID \t\t: " << c2.c_id << endl;
     cout << "Car Company Name: " << c2.c_name << endl;
     cout << "Car Colour \t: " << c2.c_colour << endl;
     cout << "Car Model\t: " << c2.c_model << endl;
     cout << "Car Release Year: " << c2.c_year << endl;
     cout << endl;

     cout << endl
          << "\tCar 3 : " << endl
          << "Car ID \t\t: " << c3.c_id << endl;
     cout << "Car Company Name: " << c3.c_name << endl;
     cout << "Car Colour \t: " << c3.c_colour << endl;
     cout << "Car Model\t: " << c3.c_model << endl;
     cout << "Car Release Year: " << c3.c_year << endl;
     cout << endl;

     cout << endl
          << "\tCar 4 : " << endl
          << "Car ID \t\t: " << c4.c_id << endl;
     cout << "Car Company Name: " << c4.c_name << endl;
     cout << "Car Colour \t: " << c4.c_colour << endl;
     cout << "Car Model\t: " << c4.c_model << endl;
     cout << "Car Release Year: " << c4.c_year << endl;
     cout << endl;
     return 0;
}