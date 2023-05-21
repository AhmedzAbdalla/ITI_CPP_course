// lab_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

template <typename T>
class my_class
{
private:
    T val;

public:

    void set_val(T Copy_val)
    {
        val = Copy_val;
    }

    T get_val()
    {
        return val;
    }

    T add(T Copy_val)
    {
        return Copy_val + val;
    }

    T subtract(T Copy_val) const
    {
        return val - Copy_val;
    }

    my_class(T value) : val(value)
    {

    }

};

int main()
{
    my_class<int> class_1(5);

    cout <<"=> init val: " << class_1.get_val() << endl;
    cout <<"=> add val: " << class_1.add(2) << endl;
    cout <<"=> subtract val: " << class_1.subtract(1) << endl;

    

}
