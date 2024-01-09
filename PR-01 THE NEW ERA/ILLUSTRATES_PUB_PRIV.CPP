// Write a Program which illustrates the use of public and private access modifiers

#include <iostream>
using namespace std;

class ILLUSTRATES_PUB_PRIV
{
private:
public:
    int id;
    char name[20];
};

int main()
{
    ILLUSTRATES_PUB_PRIV s1;
    cout << "Enter your id : ";
    cin >> s1.id;
    cout << "Enter your name : ";
    cin >> s1.name;

    cout << endl
         << "Id\t: " << s1.id << endl
         << "Name\t: " << s1.name;
}