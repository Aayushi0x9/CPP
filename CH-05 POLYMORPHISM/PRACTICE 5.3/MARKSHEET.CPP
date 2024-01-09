// Create following marksheet using Unary Operator Overloading and Binary Operator Overloading
#include <iostream>
using namespace std;

class Result
{
public:
    int sub;

    void setter()
    {
        cout << "Enter Science Marks : ";
        cin >> sub;
    }

    Result operator-(int n)
    {
        Result marks;

        marks.sub = sub - n;
        return marks;
    }

    Result operator+(int n)
    {
        Result marks;

        marks.sub = sub + n;
        return marks;
    }

    int Grade(double per)
    {
        if (per >= 90)
            cout << "A1";
        else if (per >= 80)
            cout << "A2";
        else if (per >= 70)
            cout << "B1";
        else if (per >= 60)
            cout << "B2";
        else if (per >= 50)
            cout << "C1";
        else if (per >= 40)
            cout << "C2";
        else if (per >= 33)
            cout << "D";
        else
        
            cout << "Please Try Harder !!";
    }
};

int main()
{

    Result math, sci, eng, guj, ss, com, Grade;

    sci.setter();
    cout << "Science : " << sci.sub << endl;

    math = sci - 3;
    cout << "Math : " << math.sub << endl;

    eng = sci - 1;
    cout << "English : " << eng.sub << endl;

    guj = sci + 1;
    cout << "Gujarati : " << guj.sub << endl;

    ss = sci - 2;
    cout << "Social science : " << ss.sub << endl;

    com = sci + 2;
    cout << "Computer : " << com.sub << endl;

    int total = sci.sub + math.sub + eng.sub + guj.sub + ss.sub + com.sub;
    cout << "Total : " << total << endl;

    double per = (double)total / 6;
    cout << "Percentage : " << per << endl;
    cout << "Grade : ";
    math.Grade(per);

    return 0;
}
