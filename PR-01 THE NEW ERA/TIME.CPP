// Write a Program to read time in seconds and convert it into time in (HH:MM:SS) format
#include <iostream>
using namespace std;

int main()
{
    int hour, min, sec, inp;
    cout << "Enter your Second : ";
    cin >> inp;

    hour = inp / 3600;
    min = (inp % 3600) / 60;
    sec = inp - ((hour * 3600) + (min * 60));

    cout << "Time : " << hour << " : " << min << " : " << sec;
    return 0;
}
