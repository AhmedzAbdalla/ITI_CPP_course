// CPP_task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <conio.h>
#include <iostream>
#include <string>

using namespace std;
namespace dakahliya
{
    namespace Aga
    {
        int no_people = 0;
        int no_families = 0;
        int no_workers = 0;
        int no_students = 0;

        int op_code = 0;

        void print_data(void)
        {
            cout << "People  : " << no_people << endl;
            cout << "Families: " << no_families << endl;
            cout << "Worker  : " << no_workers << endl;
            cout << "students: " << no_students << endl;
        }
        void get_data(void)
        {
            cout << "=>Enter data of Aga." << endl;
            cout << "  Enter Number of people: ";
            cin >> no_people;
            cout << "  Enter Number of families: ";
            cin >> no_families;
            cout << "  Enter Number of workers: ";
            cin >> no_workers;
            cout << "  Enter Number of Students: ";
            cin >> no_students;
        }

        void edit_data(void)
        {

            cout << "1) Edit Number of people\n";
            cout << "2) Edit Number of families\n";
            cout << "3) Edit Number of workers\n";
            cout << "4) Edit Number of Students\n";
            cin >> op_code;
            switch (op_code)
            {
            case 1 :
                cout << "Enter Number of people: ";
                cin >> no_people;
                break;
            case 2 :
                cout << "Enter Number of families: ";
                cin >> no_families;
                break;
            case 3 :
                cout << "Enter Number of workers: ";
                cin >> no_workers;
                break;
            case 4 :
                cout << "Enter Number of Students: ";
                cin >> no_students;
                break;

            default:
                cout << "Invalid Option!";
                break;
            }
        }


        void reset_data(void)
        {
            no_people = 0;
            no_families = 0;
            no_workers = 0;
            no_students = 0;
        }
    }

    namespace Mansoura
    {
        int no_people = 0;
        int no_families = 0;
        int no_workers = 0;
        int no_students = 0;
        int op_code = 0;

        void print_data(void)
        {
            cout << "People  : " << no_people << endl;
            cout << "Families: " << no_families << endl;
            cout << "Worker  : " << no_workers << endl;
            cout << "students: " << no_students << endl;
        }
        void get_data(void)
        {
            cout << "=>Enter Data of Mansoura" << endl;
            cout << "  Enter Number of people: ";
            cin >> no_people;
            cout << "  Enter Number of families: ";
            cin >> no_families;
            cout << "  Enter Number of workers: ";
            cin >> no_workers;
            cout << "  Enter Number of Students: ";
            cin >> no_students;
        }

        void edit_data(void)
        {

            cout << "1) Edit Number of people\n";
            cout << "2) Edit Number of families\n";
            cout << "3) Edit Number of workers\n";
            cout << "4) Edit Number of Students\n";
            cin >> op_code;
            switch (op_code)
            {
            case 1:
                cout << "Enter Number of people: ";
                cin >> no_people;
                break;
            case 2:
                cout << "Enter Number of families: ";
                cin >> no_families;
                break;
            case 3:
                cout << "Enter Number of workers: ";
                cin >> no_workers;
                break;
            case 4:
                cout << "Enter Number of Students: ";
                cin >> no_students;
                break;

            default:
                cout << "Invalid Option!";
                break;
            }
        }


        void reset_data(void)
        {
            no_people = 0;
            no_families = 0;
            no_workers = 0;
            no_students = 0;
        }
    }
    namespace Mit_Ghmr
    {
        int no_people = 0;
        int no_families = 0;
        int no_workers = 0;
        int no_students = 0;
        int op_code = 0;
        void print_data(void)
        {
            cout << "People  : " << no_people << endl;
            cout << "Families: " << no_families << endl;
            cout << "Worker  : " << no_workers << endl;
            cout << "students: " << no_students << endl;
        }

        void get_data(void)
        {
            cout << "=>Enter Data of Mit Ghmr" << endl;
            cout << "  Enter Number of people: ";
            cin >> no_people;
            cout << "  Enter Number of families: ";
            cin >> no_families;
            cout << "  Enter Number of workers: ";
            cin >> no_workers;
            cout << "  Enter Number of Students: ";
            cin >> no_students;
        }

        void edit_data(void)
        {

            cout << "1) Edit Number of people\n";
            cout << "2) Edit Number of families\n";
            cout << "3) Edit Number of workers\n";
            cout << "4) Edit Number of Students\n";
            cin >> op_code;
            switch (op_code)
            {
            case 1:
                cout << "Enter Number of people: ";
                cin >> no_people;
                break;
            case 2:
                cout << "Enter Number of families: ";
                cin >> no_families;
                break;
            case 3:
                cout << "Enter Number of workers: ";
                cin >> no_workers;
                break;
            case 4:
                cout << "Enter Number of Students: ";
                cin >> no_students;
                break;

            default:
                cout << "Invalid Option!";
                break;
            }
        }


        void reset_data(void)
        {
            no_people = 0;
            no_families = 0;
            no_workers = 0;
            no_students = 0;
        }
    }
}


template <typename T1, typename T2>
int print_data_2_cities(T1 tem_1 , T2 tem_2)
{
    int ret = 0;
    // aga = 1 , mans = 2 , mit ghmar = 3
    if (((tem_1 == (T1)"Aga") && (tem_2 == (T2)"Mans")) || (((int)tem_1 == 1) && ((int)tem_2 == 2)))
    {
        ret = dakahliya::Aga::no_people + dakahliya::Mansoura::no_people;
    }
    else if(((tem_1 == (T1)"Aga") && (tem_2 == (T2)"Mit")) || (((int)tem_1 == 1) && ((int)tem_2 == 3)))
    {
        ret = dakahliya::Aga::no_people + dakahliya::Mit_Ghmr::no_people;
    }
    else if(((tem_1 == (T1)"Mans") && (tem_2 == (T2)"Mit")) || (((int)tem_1 == 2) && ((int)tem_2 == 3)))
    {
        ret = dakahliya::Mit_Ghmr::no_people + dakahliya::Mansoura::no_people;
    }

    else
    {
        ret = -1;
    }

    return ret;
}


template <typename T1, typename T2, typename T3>
int print_3_cities(T1 tem_1, T2 tem_2, T3 tem_3)
{
    return dakahliya::Mit_Ghmr::no_workers + dakahliya::Mansoura::no_workers + dakahliya::Aga::no_people;
}

int main()
{
    dakahliya::Aga::get_data();
    dakahliya::Mansoura::get_data();
    dakahliya::Mit_Ghmr::get_data();
    
    int op_code = 0;
    int city_code = 0;
    int city_code_2 = 0;

    while (true)
    {
        cout << "Enter operation" << endl;
        cout << "1)Edit data" << endl;
        cout << "2)Reset data" << endl;
        cout << "3)print data" << endl;
        cout << "4)Get Number of people in two cities" << endl;
        cout << "5)Get Number of people in all cities" << endl;

        cin >> op_code;

        if ((op_code == 1) || (op_code == 2) || (op_code == 3)|| (op_code == 4)|| (op_code == 5))
        {
            cout << "Enter city" << endl;
            cout << "1)Aga" << endl;
            cout << "2)Mansoura" << endl;
            cout << "3)Mit Ghmr" << endl;
            cin >> city_code;
            if ((op_code == 1)  )
            {
                if ((city_code == 1))
                {
                    dakahliya::Aga::edit_data();
                }
                else if((city_code == 2))
                {
                    dakahliya::Mansoura::edit_data();
                }
                else if((city_code == 3))
                {
                    dakahliya::Mit_Ghmr::edit_data();
                }
                else
                {
                    cout << "Invalid City Selection" << endl;
                }
                //fflush(stdin);
                getchar();
                //system("cls");
            }
            else if ((op_code == 2)  )
            {
                if ((city_code == 1))
                {
                    dakahliya::Aga::reset_data();
                }
                else if((city_code == 2))
                {
                    dakahliya::Mansoura::reset_data();
                }
                else if((city_code == 3))
                {
                    dakahliya::Mit_Ghmr::reset_data();
                }
                else
                {
                    cout << "Invalid City Selection" << endl;
                }
                //fflush(stdin);
                getchar();
                //system("cls");
            }
            else if ((op_code == 3)  )
            {
                if ((city_code == 1))
                {
                    dakahliya::Aga::print_data();
                }
                else if((city_code == 2))
                {
                    dakahliya::Mansoura::print_data();
                }
                else if((city_code == 3))
                {
                    dakahliya::Mit_Ghmr::print_data();
                }
                else
                {
                    cout << "Invalid City Selection" << endl;
                }
                //fflush(stdin);
                getchar();
                //system("cls");
            }
            else if ((op_code == 4))
            {
                cout << "Enter Second city" << endl;
                cout << "1)Aga" << endl;
                cout << "2)Mansoura" << endl;
                cout << "3)Mit Ghmr" << endl;
                cin >> city_code_2;
                cout << print_data_2_cities<int , int>(city_code, city_code_2) << endl;
               
                
                //fflush(stdin);
                getchar();
                //system("cls");
            }
            else if ((op_code == 5))
            {
                cout << print_3_cities<int , int , string >(city_code, city_code_2 , "all") << endl;
                getchar();
                //system("cls");
            }
            else
            {
                cout << "Invalid Operation Selection" << endl;
            }
            //fflush(stdin);
            getchar();
            //system("cls");
        }

    }
}

