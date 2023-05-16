// CPP_lab_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

template <typename T1 , typename T2 , typename T3>
T3 max_1(T1 a, T2 b)
{
    return  a + b;
}
int main()
{
    cout << max_1<int , int , int>(5 , 7) << endl;
    cout << max_1<string, string , string>("adad", "Ahmed") << endl;
    cout << max_1<int , float , float >(5 , 7.2) << endl;
    string name = "";
    cout << "Enter your name: ";
    //cin >> name;
    getline(cin, name);
    cout << "Your name: " << name << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
