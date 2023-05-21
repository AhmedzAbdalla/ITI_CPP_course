// labs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class shape
{
private:


public:

    //pure virtual
    virtual void area() = 0;
    virtual void func_1() = 0;

    //contructor
    shape()
    {
        
    }

};




class circle : public shape
{
private:


public:


    void area()
    {
        cout << "circle Area" << endl;
    }
    void func_1()
    {
        cout << "ay haga from circle" << endl;
    }
 

    circle()
    {
        
    }

};

class rectangle : public shape
{
private:


public:
    int len;

    void area()
    {
        cout << "rectangle Area: " << len * len<<  endl;
    }
    void func_1()
    {
        cout << "ay haga from rectangle" << endl;
    }
 

    rectangle()
    {
        
    }

};



int main()
{
    //stdudent object
    circle circle_1;

    circle_1.area();
    circle_1.func_1();


    rectangle rectangle_1;
    rectangle_1.len = 10;

    rectangle_1.area();
    rectangle_1.func_1();
}


