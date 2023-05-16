// Task_hospital.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#define MAX_NO_DOCTOR 30

using namespace std;

class person
{
    private:
        string name;
        int age;
        int id;
        int mobile;
        



    public:
        
        void person_void_set_name(string my_name);
        void person_void_set_age(int my_age);
        void person_void_set_id(int my_id);
        void person_void_set_mobile(int my_mobile);
        void print_person_data(void);
        int get_id(void);
        

    person() :name(""), age(0), id(0), mobile(0)
    {
        //cout << "Person Created Successfully!!" << endl;
    }

};

int person::get_id(void)
{
    return id;
}

void person::print_person_data(void)
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "ID: " << id << endl;
    cout << "Mobile: " << mobile << endl;

}
void person::  person_void_set_name(string my_name)
{
    if ("" != my_name)
    {
        name = my_name;
    }
    else
    {
        cout << "Invalid Name" << endl;
    }
    cout << "Name: " << name << endl;
}
void person::person_void_set_age(int my_age)
{
    if ( 0 != my_age)
    {
        age = my_age;
    }
    else
    {
        cout << "Invalid Age" << endl;
    }
}void person::person_void_set_mobile(int my_mobile)
{
    if (0 < my_mobile)
    {
        mobile = my_mobile;
    }
    else
    {
        cout << "Invalid Mobile Number" << endl;
    }
}

void person::person_void_set_id(int my_id)
{
    if (0 < my_id)
    {
        id = my_id;
    }
    else
    {
        cout << "Invalid ID" << endl;
    }
}

class docter : public person
{
    private:
        int salary;
        int expercience_level;
        static int count;
        string specialization;
        

    
    public:
        void set_salary(void);
        void set_expercience_level(void);
        void set_specialization(void);
        void set_name(void);
        void set_age(void);
        void set_id(void);
        void set_mobile(void);
        void print_doctor_data(void);
        void set_person_data(void);

        docter() : salary(0), expercience_level(0), specialization("")
        {
            //cout << "Doctor object created!!" << endl;
        }

};

int docter::count = 0;

void docter::set_person_data(void)
{
    set_name();
    set_age();
    set_mobile();
    set_specialization();
    set_expercience_level();
    set_id();
    set_salary();
}



void docter :: print_doctor_data(void)
{
    print_person_data();
    cout << "Specialization: " << specialization << endl;
    cout << "Expercience Level: " << expercience_level << endl;
}

void docter::set_salary(void)
{
    int l_salary = 0;
    cout << "Please Enter the salary: ";
    (cin >> l_salary);
    cin.ignore();

    if (10000 > (l_salary))
    {
        cout << "Mini salary" << endl;
    }
    else
    {
        salary = l_salary;
    }
}

void docter::set_expercience_level(void)
{
    int l_expercience_level = 0;
    cout << "Please Enter the expercience_level: ";
    (cin >> l_expercience_level);
    cin.ignore();
    if (l_expercience_level < 5)
    {
        cout << "Lack of expercience" << endl;
    }
    else
    {
        expercience_level = l_expercience_level;
    }
}

void docter::set_specialization(void)
{
    string l_specialization;

    cout << "Please Enter the specialization: ";
    fflush(stdin);

    
    getline(cin, specialization);

    //cin >> specialization;

    //specialization = l_specialization;
}

void docter ::  set_name(void)
{
    string l_name = "";
    cout << "Please Enter the Docter Name: ";

    //cin.ignore();
    getline(cin, l_name);


    person_void_set_name(l_name);
    
}

void docter::set_age(void)
{
    int l_age = 0;
    cout << "Enter the Docter Age: ";
    cin >> l_age;
    cin.ignore();

    if (l_age < 30)
    {
        cout << "Too young" << endl;
    }
    else
    {
        person_void_set_age(l_age);
    }
}


void docter::set_id(void)
{
    int l_id = 0;
    cout << "Enter the Docter ID: ";
    cin >> l_id;
    cin.ignore();

    if (100 > l_id)
    {
        cout << "Invalid ID" << endl;
    }
    else
    {
        person_void_set_id(l_id);
    }

    
}
void docter::set_mobile(void)
{
    int l_mobile = 0;
    cout << "Enter the Docter Mobile: ";
    cin >> l_mobile;
    cin.ignore();
    person_void_set_mobile(l_mobile);
}

void print_doctor_data(void);
docter docter_1[MAX_NO_DOCTOR];
int counter = 0;
int main()
{
    int op_code = 0;
    cout << "****************************************************************************" << endl;
    cout << "************************** Welcome to our hospital *************************" << endl;
    cout << "****************************************************************************" << endl;

    while (true)
    {
        cout << "1) Add new Doctor." << endl;
        cout << "2) print Soecific Doctor data." << endl;
        cout << "Enter your Option: ";
        cin >> op_code;
        cin.ignore();

        if (op_code == 1)
        {
            docter_1[counter].set_person_data();
            counter++;
        }
        else if (op_code == 2)
        {
            print_doctor_data();
        }
        else
        {
            cout << "Invalid Option." << endl;
        }
    }
    


    
}

void print_doctor_data(void)
{
    int l_id = 0;
    int flag = 0;

    cout << "enter doctor ID: " << endl;
    cin >> l_id;
    cin.ignore();

    for (int i = 0; i < counter; i++)
    {
        if (docter_1[i].get_id() == l_id)
        {
            docter_1[i].print_doctor_data();
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "=>Doctor Not Exist!" << endl;
    }
    else
    {
        cout << "===========================================================" << endl;
    }

}