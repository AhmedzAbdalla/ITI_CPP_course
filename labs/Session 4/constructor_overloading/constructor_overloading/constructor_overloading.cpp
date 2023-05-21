// labs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class person
{
private:
    string name;
    int age;

public:
    void set_name(string l_name);
    void set_age(int l_age);
    void print_person_data(void);

    //contructor
    person(string l_name, int l_age) : name(l_name), age(l_age)
    {
        cout << "Hello from person" << endl;
    }

};


void person::set_name(string l_name)
{
    name = l_name;
}

void person::set_age(int l_age)
{
    age = l_age;
}

void person::print_person_data(void)
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}



class student : public person
{
private:
    int level;
    float GPA;

public:
    void set_std_GPA(float l_gpa);
    void set_std_level(int l_level);
    void print_std_data(void);

    student(string l_name, int l_age, float l_gpa, int l_level) : level(l_level), GPA(l_gpa), person(l_name, l_age)
    {
        cout << "Hello from student" << endl;
    }

};

void student::set_std_GPA(float l_gpa)
{
    GPA = l_gpa;
}
void student::set_std_level(int l_level)
{
    level = l_level;
}

void student::print_std_data(void)
{
    print_person_data();
    cout << "Level: " << level << endl;
    cout << "GPA: " << GPA << endl;

}

class athlete : public student
{
private:
    string sport;
    int rank;

public:
    void set_ath_sport(string l_sport);
    void set_ath_rank(int l_rank);
    void print_ath_data(void);

    athlete(string l_name, int l_age, float l_gpa, int l_level, string l_sport, int l_rank) : rank(l_rank), sport(l_sport), student(l_name, l_age, l_gpa, l_level)
    {
        cout << "Hello from athlete" << endl;
    }
};

void athlete::set_ath_sport(string l_sport)
{
    sport = l_sport;
}
void athlete::set_ath_rank(int l_rank)
{
    rank = l_rank;
}

void athlete::print_ath_data(void)
{
    print_person_data();
    cout << "Sport: " << sport << endl;
    cout << "Rank: " << rank << endl;
}

class employee : public person
{
    string title;
    int salary;

public:
    void set_emp_title(string l_title);
    void set_emp_salary(int l_salary);
    void print_emp_data(void);

    employee(string l_name, int l_age, string l_title, int l_salary) : salary(l_salary), title(l_title), person(l_name, l_age)
    {
        cout << "Hello from employee" << endl;
    }
};

void employee::set_emp_title(string l_title)
{
    title = l_title;
}
void employee::set_emp_salary(int l_salary)
{
    salary = l_salary;
}

void employee::print_emp_data(void)
{
    print_person_data();

    cout << "Title: " << title << endl;
    cout << "Salary: " << salary << endl;
}

int main()
{
    //stdudent object
    //student(string l_name, int l_age , float l_gpa, int l_level) :
    //level(l_level), GPA(l_gpa), person(l_name , l_age)

    cout << endl << "stdudent object" << endl;
    student std_1("Ahmed", 25, 3.1, 4);
    /*
    std_1.set_name("Ahmed");
    std_1.set_age(25);
    std_1.set_std_GPA(3.10);
    std_1.set_std_level(4);
    std_1.print_std_data();
    */
    //athlete object
    cout << endl << "athlete object" << endl;

    //athlete(string l_name, int l_age, float l_gpa, int l_level, string l_sport, int l_rank) : 
    //rank(l_rank), sport(l_sport), student(l_name, l_age, l_gpa, l_level)
    //{

    athlete ath_1("Amr", 36, 3.2, 5, "Football", 1);

    /*
    ath_1.set_name("Amr");
    ath_1.set_age(22);
    ath_1.set_std_GPA(3.10);
    ath_1.set_std_level(4);
    ath_1.set_ath_rank(1);
    ath_1.set_ath_sport("Football");
    */
    ath_1.print_ath_data();

    //Employee object
    cout << endl << "Employee object" << endl;

    employee emp_1("yousef", 26, "Embedded", 25000);
    /*
    emp_1.set_name("yousef");
    emp_1.set_age(23);
    emp_1.set_emp_salary(16000);
    emp_1.set_emp_title("Embedded Software");
    */

    //employee(string l_name, int l_age, string l_title, int l_salary) : 
    //salary(l_salary), title(l_title), person(l_name, l_age)
    //{
    emp_1.print_emp_data();


}


