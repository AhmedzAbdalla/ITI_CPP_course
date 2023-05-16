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
            //cout << "Hello 1" << endl;
        }
        
        company(int num1 )
        {
            //cout << "Number_1: " << num1 << endl;
            //cout << "Number_2: " << num2 << endl;
        }
        /*
        ~company()
        {
            cout << "Finished" << endl;
        }

        */

        company operator ++ ()
        {
            int l_std_num = std_num;
            int l_std_max = std_max;
            int l_teacher_num = teacher_num;
            company temp;
            temp.teacher_num = ++l_teacher_num;
            temp.std_num = ++l_std_num;
            temp.std_max = ++l_std_max;
            
            temp.name = "Operator Overloading";
           return temp;
        }
        company operator -- ()
        {
            int l_std_num = std_num;
            int l_std_max = std_max;
            int l_teacher_num = teacher_num;
            company temp;
            temp.teacher_num = --l_teacher_num;
            temp.std_num = --l_std_num;
            temp.std_max = --l_std_max;
            //temp.teacher_num = --teacher_num;
            temp.name = "Operator Overloading_2";
            //name = "VVVVVVVV";
            //++teacher_num;
           return temp;
        }
        company operator ++ (int)
        {
            int l_std_num = std_num;
            int l_std_max = std_max;
            int l_teacher_num = teacher_num;

            company temp;
            temp.teacher_num = l_teacher_num++;
            temp.std_num = l_std_num++;
            temp.std_max = l_std_max++;
            
            temp.name = "Operator Overloading_4";
           return temp;
        }
        company operator -- (int)
        {
            int l_std_num = std_num;
            int l_std_max = std_max;
            int l_teacher_num = teacher_num;

            company temp;
            temp.teacher_num = l_teacher_num--;
            temp.std_num = l_std_num--;
            temp.std_max = l_std_max--;
            //temp.teacher_num = --teacher_num;
            temp.name = "Operator Overloading_4";
            //name = "VVVVVVVV";
            //++teacher_num;
           return temp;
        }

        company operator + (company input)
        {
            company temp;

            temp.std_max = std_max + input.std_max;
            temp.teacher_num = teacher_num + input.teacher_num;
            temp.std_num = std_num + input.std_num;
            temp.name = "Binary operator + overloading";

            return temp;

        }
        company operator - (company input)
        {
            company temp;

            temp.std_max = std_max - input.std_max;
            temp.teacher_num = teacher_num - input.teacher_num;
            temp.std_num = std_num - input.std_num;
            temp.name = "Binary operator - overloading";

            return temp;

        }
        
        company operator * (company input)
        {
            company temp;

            temp.std_max = std_max * input.std_max;
            temp.teacher_num = teacher_num * input.teacher_num;
            temp.std_num = std_num * input.std_num;
            temp.name = "Binary operator * overloading";

            return temp;

        }
        
        company operator / (company input)
        {
            company temp;

            temp.std_max = std_max / input.std_max;
            temp.teacher_num = teacher_num / input.teacher_num;
            temp.std_num = std_num / input.std_num;
            temp.name = "Binary operator / overloading";

            return temp;

        }
};

int main()
{

    company school_1;
    cout << "=============" << endl;

    
    school_1.name = "test_1";
    school_1.set_std_max(500);
    school_1.add_std();
    school_1.add_std();
    school_1.add_std();
    school_1.add_teacher();
    school_1.add_teacher();
    school_1.add_teacher();
    
    cout << endl << "school 1" << endl;
    school_1.print_data();
    
    cout << "************************************" << endl;
    company school_2 = ++school_1;
    cout << endl << "school 2" << endl;
        school_2.print_data();

        cout << endl <<"school 3" << endl;
        company school_3 = --school_1;
        school_3.print_data();

        cout << endl << "school 4" << endl;
        company school_4 = (school_1  * school_2) + (school_3 / school_1) + (school_2);
        school_4.print_data();
        
        cout << endl << "Test binary operator overloading" << endl;
        //cout << endl << "postfix increment" << endl;
        company school_5 = school_1 * school_2;
        school_5.print_data();
        /*
        cout << endl << "postfix decrement" << endl;
        company school_6 = school_1--;
        school_6.print_data();

        cout << endl << "**************************************" << endl;
        cout << endl << "binary overloadind" << endl;
        company school_7 = school_6 + school_5;
        school_7.print_data();
        */
    return 0;
}

