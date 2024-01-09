/* Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert that Fahrenheit temperature into Kelvin by implementing multilevel inheritance: Class P -> Class Q -> Class R
- Class P has the following members: temperature attribute in float
- Class Q has the following members: toFehrenheit() method
- Class R has the following members: toKelvin() method */

#include<iostream>
using namespace std;

class p
{
    protected:
    float celcius,fehrenheit,kelvin;
    
    public:
    void setCelcius()
    {
        cout << "Enter your degree Celsius : ";
        cin >> celcius;
    }
};

class Q : public p
{
    public:
    void Fehrenheit()
    {
        fehrenheit = (1.8) * celcius + 32;
        cout << "======================="<<endl
               <<endl<<"Celsius to Fehrenheit : " << fehrenheit << endl;
    }
};

class R : public Q
{
    public:
    void Kelvin()
    {
        kelvin = (fehrenheit - 32) * 5/9 + 273.15 ;
        cout << "Fehrenhrit to Kelvin : " << kelvin << endl;
    }
};

int main()
{
    R convert;

    convert.setCelcius();
    convert.Fehrenheit();
    convert.Kelvin();

    return 0;
}