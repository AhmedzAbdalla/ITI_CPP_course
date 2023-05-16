// Lab_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


class company
{
    private:
        int std_num = 0;
        int std_max = 0;
        int teacher_num = 0;
    


    public:
        string name;
        void set_std_max(int std_name_local)
        {
            if (std_name_local > 1000)
            {
                cout << "Invalid max numbe rof std" << endl;
            }
            else
            {
                std_max = std_name_local;
            }
        }
        void add_std(void)
        {
            if (std_num < std_max)
            {
                std_num+=1;
                //cout << "No. Of student: " << std_num << endl;
            }
            else
            {
                cout << "School is Complete" << endl;
            }
        }
        void add_teacher(void)
        {
            if (teacher_num < 50)
            {
                teacher_num++;
            }
            else
            {
                cout << "School is Complete" << endl;
            }
        }
    
        void print_data(void)
        {
            cout << "Name: " << name << endl;
            cout << "Stuent max: " << std_max << endl;
            cout << "No. Of student: " << std_num << endl;
            cout << "No. Of teachers: " << teacher_num << endl;
        }

        company()
        {
            cout << "Hello 1" << endl;
        }
        
};

int main()
{

    company school_1;
  

    
    school_1.name = "test_1";
    school_1.set_std_max(500);
    school_1.add_std();
    school_1.add_std();
    school_1.add_std();
    school_1.add_teacher();
    school_1.add_teacher();
    school_1.add_teacher();
    

    school_1.print_data();
    

    return 0;
}

