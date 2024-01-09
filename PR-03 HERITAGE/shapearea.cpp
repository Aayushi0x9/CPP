//Write a Program that defines a shape class with a constructor that gives value to width and height. 
//Then define two sub-classes triangle and rectangle, that calculate the area of the shape area (). In the main,
// define two objects a triangle and a rectangle, and then call the area() function using these two objects.

#include<iostream>
#include<string.h>
using namespace std;

class shape{
     protected:
    float width, height;
    
    public: 
    shape(){
        cout << endl << "For Rectangle and Triangle..." << endl;
        cout << "Enter area of width : ";
        cin >> width;
        cout << "Enter the area of height : ";
        cin >> height;
    }
};

class triangle : public shape {
    float cal;
    
    public:
    void area(){
        cal = 0.5*(width*height);
        cout <<"The area of triangle : " <<cal<< endl;
    }
};

class rectangle : public shape {
    float cal;
    
    public:
    void area(){
        cal = width*height;
        cout <<"The area of rectangle : " <<cal<< endl;
    }
};

int main(){

    rectangle r;
    cout << endl << "------: Area of Rectangle :------" << endl;
    r.area();
    
    triangle t;
    cout <<endl << "------: Area of Triangle :--------" << endl;
    t.area();
    return 0;
}