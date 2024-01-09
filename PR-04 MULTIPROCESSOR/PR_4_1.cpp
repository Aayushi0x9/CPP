/*
Write a Program to create a Message class with a constructor that takes a
single string with a default value. Create a private member of the typed string,
and in the constructor simply assign the argument string to your internal string.
Create two overloaded member functions called print( ): one that takes no
arguments and simply prints the message stored in the variable and one that
takes a string argument, which it prints in addition to the internal message.
*/
#include <iostream>
#include <string>

using namespace std;

class Message
{
private:
    string msg;

public:
    Message(string msg = "")
    {
        this->msg = msg;
    }

    void print()
    {
        cout << msg << endl;
    }

    void print(string addmsg)
    {
        cout << msg << " " << addmsg << endl;
    }
};

int main()
{

    string msg;
    cout << "Enter any msg : ";
    cin >> msg;

    Message msg1(msg);
    msg1.print();

    Message msg2("Aayushi");
    msg2.print("nikhare");

    return 0;
}