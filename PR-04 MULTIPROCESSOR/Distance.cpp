// Write a Program to add two distances using binary plus (+) operator overloading.
#include <iostream>

using namespace std;

class Distance
{
private:
    int km;
    int meter, m;

public:
    void setInput()
    {
        cout << "KM : ";
        cin >> km;
        cout << "Meter : ";
        cin >> m;
    }

    Distance operator+(Distance d)
    {
        int totalKm = this->km + d.km;
        int totalMeter = this->meter + d.meter;

        while (totalMeter >= 1000)
        {
            totalKm++;
            totalMeter -= 1000;
        }
        cout << "Km: " << totalKm << endl
             << " Meter: " << totalMeter << endl;
    }
};

int main()
{
    Distance input1, input2;

    cout << "Input 1 :" << endl;
    input1.setInput();
    cout << "Input 2 :" << endl;
    input2.setInput();

    Distance input = input1 + input2;

    return 0;
}