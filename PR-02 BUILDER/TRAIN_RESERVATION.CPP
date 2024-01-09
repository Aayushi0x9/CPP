// Write a Program to make Railway Reservation System.

#include <iostream>
using namespace std;

class BILLING_SYSTEM
{
private:
    // book attributes
    int n;

public:
    void setrecord()
    {
        cout << endl
             << "------------: Train Details :-------------" << endl
             << endl;
        cout << "Number\t    Name\t  Source\tDestination \tTime" << endl
             << "__________________________________________________________________";
        cout << endl
             << "1234\tMetro\t\t   Surat\tMumbai\t\t10:00 AM" << endl
             << "2324\tVande Mataram\t   Ahemdabad\tDelhi\t\t3:00 PM" << endl
             << "3455\tMaharana Pratap\t   Surat\tVadodara\t5:00 AM" << endl;
    }

    int Train(int n)
    {
        cout << "Train Number : " << n << endl
             << "Train name : " << endl
             << "Train Source : " << endl
             << "Train Destination : " << endl
             << "Train Time : " << endl;
    }

    void book()
    {
        cout << endl
             << "Enter your Train Number : ";
        cin >> n;
        cout << endl
             << "_________________________________________________________" << endl
             << "Your Train Reservation is Completed..." << endl
             << "_________________________________________________________" << endl;
        switch (n)
        {
        case 1234:
            cout << "Train Number\t  : 1234" << endl
                 << "Train name\t  : Metro" << endl
                 << "Train Source\t  : Surat" << endl
                 << "Train Destination : Mumbai" << endl
                 << "Train Time\t  : 10:00 AM" << endl;
            break;

        case 2324:
            cout << "Train Number\t  : 2324" << endl
                 << "Train name\t  : Vande Matram" << endl
                 << "Train Source\t  : Ahemdabad" << endl
                 << "Train Destination : Delhi" << endl
                 << "Train Time\t  : 3:00 PM" << endl;
            break;

        case 3455:
            cout << "Train Number\t  : 3455" << endl
                 << "Train name\t  : Maharana Pratap" << endl
                 << "Train Source\t  : Surat" << endl
                 << "Train Destination : Vdodara" << endl
                 << "Train Time\t  : 5:00 AM" << endl;
            break;

        default:
            cout << "Please Enter valid Train number...!!";
            break;
        }
    }
};

int main()
{
    BILLING_SYSTEM b;

    b.setrecord();
    b.book();
    return 0;
}
