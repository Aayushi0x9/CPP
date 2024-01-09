// Write a Program to make Supermarket Billing System

#include <iostream>
using namespace std;

class BILLING_SYSTEM
{
private:
    // LOGIN ATTRIBUTES
    char id[20];
    char psw[10];

    // record attributes
    int i_no, i_qny, i_price;
    char i_name[10];
    float i_discount;

    // BILL ATTRIBUTES
    int n, q, bill;

public:
    void setlogin()
    {
        cout << endl
             << "Enter your User ID : ";
        cin >> id;
        cout << "Enter your Password : ";
        cin >> psw;
        cout << endl;
        cout << "~~~~~~~~~~~ Log in Successfully !! ~~~~~~~~~~~~~" << endl;
    }

    void setrecord()
    {
        cout << endl
             << "------------: Product Details :-------------" << endl
             << endl;
        cout << "Number\tName\tprice\t\tDiscount" << endl
             << "__________________________________________________________________";
        cout << endl
             << "1\tApple\t200 per.Kg\t10%" << endl
             << "2\tOrange\t100 perKg\t5%" << endl
             << "3\tBanana\t180 perKg\t8%" << endl
             << "0 ------>> for Exit" << endl;
    }

    void getbill()
    {
    bill:
        cout << endl
             << "Enter product number : ";
        cin >> n;

        if (n != 0)
        {
            cout << "Enter product quantity : ";
            cin >> q;
            cout << "__________________________________________" << endl
                 << "|----------------: BILL :-----------------|" << endl
                 << "|_________________________________________|";
            switch (n)
            {
            case 1:
                cout << endl
                     << "product Name : Apple" << endl
                     << "product quantity per Kg : " << q << endl
                     << "Product Discount : " << 10 * q << "%" << endl
                     << "Product price : " << (10 * q) * 18 << endl;
                goto bill;

            case 2:
                cout << endl
                     << "product Name : Orange" << endl
                     << "product quantity per Kg : " << q << endl
                     << "Product Discount : " << 5 * q << "%" << endl
                     << "Product price : " << (5 * q) * 9.5 << endl;
                goto bill;

            case 3:
                cout << endl
                     << "product Name : Banana" << endl
                     << "product quantity per Kg : " << q << endl
                     << "Product Discount : " << 8 * q << "%" << endl
                     << "Product price : " << (8 * q) * 16.56 << endl;
                goto bill;
            }
        }
    }
};

int main()
{
    BILLING_SYSTEM b;
    b.setlogin();
    b.setrecord();
    b.getbill();

    return 0;
}
