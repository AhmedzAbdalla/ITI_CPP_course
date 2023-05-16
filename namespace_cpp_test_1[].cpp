// namespace_cpp_test_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


float circle_r = 0.0;
float rectangel_len = 0.0;
float rectangel_wid = 0.0;
float triangle_len = 0.0;

using namespace std;

namespace circle
{
    void get_area(void)
    {
        cout << "Enter r: " << endl;
        cin >> circle_r;
        if (circle_r < 0.0)
        {
            cout << "Invalid R" << endl;
        }
        else
        {
            cout << "circle area = " << circle_r * circle_r * 3.14 << endl;
        }
        
    } 
    void get_circum(void)
    {
        cout << "Enter r: " << endl;
        cin >> circle_r;
        if (circle_r < 0.0)
        {
            cout << "Invalid R" << endl;
        }
        else
        {
            cout << "circle circim = " << 2.0 * circle_r * 3.14 << endl;
        }
        
    }
}

namespace rectangle
{
    void get_area(void)
    {
        cout << "Enter Length: " << endl;
        cin >> rectangel_len;
        cout << "Enter Width: " << endl;
        cin >> rectangel_wid;

        if (rectangel_wid < 0.0 || (rectangel_len < 0.0))
        {
            cout << "Invalid Width Or Length" << endl;
        }
        else
        {
            cout << "rectangle Area = " << (rectangel_wid * rectangel_len) << endl;
        }

    }
    void get_cirum(void)
    {
        cout << "Enter Length: " << endl;
        cin >> rectangel_len;
        cout << "Enter Width: " << endl;
        cin >> rectangel_wid;

        if (rectangel_wid < 0.0 || (rectangel_len < 0.0))
        {
            cout << "Invalid Width Or Length" << endl;
        }
        else
        {
            cout << "rectangle circim = " << 2 * (rectangel_wid + rectangel_len) << endl;
        }

    }
}

namespace triangle
{
    void get_area(void)
    {
        cout << "Enter Length: " << endl;
        cin >> triangle_len;
        if (triangle_len < 0.0)
        {
            cout << "Invalid Width Or Length" << endl;
        }
        else
        {
            cout << "triangle Area = " << 0.5 * 1.7 * triangle_len * triangle_len << endl;
        }
    }   
    
    void get_circum(void)
    {
        cout << "Enter Length: " << endl;
        cin >> triangle_len;
        if (triangle_len < 0.0)
        {
            cout << "Invalid Width Or Length" << endl;
        }
        else
        {
            cout << "triangle circum = " << 3.0 * triangle_len << endl;
        }
    }
}

int main()
{
    rectangle::get_cirum();
    cout << "==================================" << endl;
    rectangle::get_cirum();
    cout << "==================================" << endl;
    circle::get_area();
    cout << "==================================" << endl;
    circle::get_circum();
    cout << "==================================" << endl;
    triangle::get_area();
    cout << "==================================" << endl;
    triangle::get_circum();
    cout << "==================================" << endl;

}

