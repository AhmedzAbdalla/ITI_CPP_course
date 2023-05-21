// Week_2_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Material
{
    private:
        bool electrial_conductivity;
        int Melting_point;
        string transparency;


    public:
        void set_electrial_conductivity(bool l_conductivity);
        void set_Melting_point(int l_Melting_temp);
        void set_transparency(string l_transparency);
        void print_material_properities(void);

    Material():electrial_conductivity(false), Melting_point(0) , transparency("")
    {

    }

};

void Material::set_electrial_conductivity(bool l_conductivity)
{
    electrial_conductivity = l_conductivity;
}

void Material::set_Melting_point(int l_Melting_temp)
{
    if (l_Melting_temp < 0)
    {
        /*Nothing*/
    }
    else
    {
        Melting_point = l_Melting_temp;
    }
}

void Material::set_transparency(string l_transparency)
{
    if ("" != l_transparency)
    {
        transparency = l_transparency;
    }
    else
    {
        /*Nothing.
        */
    }
}

void Material::print_material_properities(void)
{
    cout << "Electrial Conductivity: " << electrial_conductivity << endl;
    cout << "Melting Temperature: " << Melting_point << endl;
    cout << "Transparency: " << transparency << endl;
}

class Thing_Living : public Material
{
    private:
    
        bool Movement;
        string Breathing;
    public:
        void Set_Movement(bool l_movement);
        void Set_Breathing(string l_Breathing);
        void print_Thing_Living_properties(void);

    //constructor
        Thing_Living() : Movement(false) , Breathing("Oxygen")
        {

        }
    
};

void Thing_Living::Set_Movement(bool l_movement)
{
    Movement = l_movement;
}
void Thing_Living::Set_Breathing(string l_Breathing)
{
    if ("" != l_Breathing)
    {
        Breathing = l_Breathing;
    }
    else
    {
        /*Nothing*/
    }
}
void Thing_Living::print_Thing_Living_properties(void)
{
    print_material_properities();
    cout << "Movement: " << Movement << endl;
    cout << "Breathing: " << Breathing << endl;
}

class Thing_NON_Living : public Material
{
    private:
        string Name;
        string Availabiltity;
    
    public:
        void Set_Name(string l_name);
        void Set_availabiltity(string l_availabiltity);
        void printThing_NON_Living_properities(void);
    
        //constructor
        Thing_NON_Living():Name("") , Availabiltity("Rare")
        {
    
        }

};

void Thing_NON_Living::Set_Name(string l_name)
{
    if ("" != l_name)
    {
        Name = l_name;
    }
    else
    {
        /*Nothing*/
    }
}
void Thing_NON_Living::Set_availabiltity(string l_availabiltity)
{
    if ("" != l_availabiltity)
    {
        Availabiltity = l_availabiltity;
    }
    else
    {
        /*Nothing*/
    }
}
void Thing_NON_Living::printThing_NON_Living_properities(void)
{
    print_material_properities();
    cout << "Name: " << Name << endl;
    cout << "Availabiltity: " << Availabiltity << endl;
}

class plant : public Thing_Living
{
    private:
        string plant_Name;
        string plant_Season;
    public:
        void set_plant_Name(string l_plant_Name);
        void set_plant_Season(string l_plant_Season);
        void print_plant_properties(void);
        //constructor
        plant(): plant_Name("") , plant_Season("")
        {
    
        }
};

void plant::set_plant_Name(string l_plant_Name)
{
    if ("" != l_plant_Name)
    {
        plant_Name = l_plant_Name;
    }
    else
    {
        /*Nothing*/
    }
}
void plant::set_plant_Season(string l_plant_Season)
{
    if ("" != l_plant_Season)
    {
        plant_Season = l_plant_Season;
    }
    else
    {
        /*Nothing*/
    }
}
void plant::print_plant_properties(void)
{
    print_Thing_Living_properties();
    cout << "Plant Name: " << plant_Name << endl;
    cout << "Plant Season: " << plant_Season << endl;
}

class Animal : public Thing_Living
{

private:
    bool warm_blood;
    bool breath_over_lung_only;

public:
    void set_warm_blood(bool l_warm_blood);
    void set_breath_over_lung_only(bool l_breath_over_lung_only);
    void print_animal_properties(void);

    // constructor
    Animal(): warm_blood(true) , breath_over_lung_only(true)
    {

    }
   
};

void Animal :: set_warm_blood(bool l_warm_blood)
{
    warm_blood = l_warm_blood;
}
void Animal::set_breath_over_lung_only(bool l_breath_over_lung_only)
{
    breath_over_lung_only = l_breath_over_lung_only;
}
void Animal::print_animal_properties(void)
{
    print_Thing_Living_properties();
    cout << "Warm Blooded: " << warm_blood << endl;
    cout << "Breath with lungs only: " << breath_over_lung_only << endl;
}

class Repetile : public Animal
{
    private:
        string name;
        int legs_num;
    public:
        void Set_Repetile_name(string l_name);
        void Set_Repetile_legs_num(int l_legs_num);
        void print_Repetile_properties(void);
    
    Repetile() : name("") , legs_num(0)
    {

    }
};

void Repetile::Set_Repetile_name(string l_name)
{
    if ("" != l_name)
    {
        name = l_name;
    }
    else {/*nothing*/ }
}
void Repetile::Set_Repetile_legs_num(int l_legs_num)
{
    if ((l_legs_num > 100) && (l_legs_num < 1))
    {
        legs_num = l_legs_num;
    }
    else {/*nothing*/ }
}
void Repetile::print_Repetile_properties(void)
{
    print_animal_properties();
    cout << "Repetile Name: " << name << endl;
    cout << "Repetile Legs Num.: " << legs_num << endl;
}


class Mammal : public Animal
{
    private:
        bool walks_on_four;
        bool tail;
    public:
        void set_Mammal_walks_on_four(bool l_walks_on_four);
        void set_Mammal_tail(bool l_tail);
        void print_Mammal_properties(void);
    
    Mammal() :walks_on_four(true) , tail(true)
    {

    }
     
};


void Mammal::set_Mammal_walks_on_four(bool l_walks_on_four)
{
    walks_on_four = l_walks_on_four;
}
void Mammal::set_Mammal_tail(bool l_tail)
{
    tail = l_tail;
}
void Mammal::print_Mammal_properties(void)
{
    print_animal_properties();
    cout << "Walks on four: " << walks_on_four << endl;
    cout << "Tail: " << tail << endl;
}

class Human_Being : public Mammal
{
    private:
        string name;
        int age;
    
    public:
        void set_name(string l_name);
        void set_age(int l_age);
        void print_Human_Being_properties(void);

    Human_Being() :name(""), age(1)
    {

    }
};

void Human_Being::set_name(string l_name)
{
    if ("" != l_name)
    {
        name = l_name;
    }
    else{/*Nothing*/ }
}
void Human_Being::set_age(int l_age)
{
    if (0 >  l_age)
    {
        age = l_age;
    }
    else {/*Nothing*/ }
}
void Human_Being::print_Human_Being_properties(void)
{
    print_Mammal_properties();
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

class artist : public Human_Being
{
private:
    string name;
    int salary;
public:
    void set_band_name(string l_name);
    void set_salary(int l_salary);
    void print_artist_properties(void);

    artist() : name(""), salary(0)
    {

    }

};

void artist::set_band_name(string l_name)
{
    if ("" != l_name)
    {
        name = l_name;
    }
    else {/*nothing*/ }
}
void artist::set_salary(int l_salary)
{
    if (l_salary < 0)
    {
        /*nothing*/
    }
    else
    {
        salary = l_salary;
    }

}
void artist::print_artist_properties(void)
{
    print_Human_Being_properties();
    cout << "Artist Band Name: " << name << endl;
    cout << "Artist Salary: " << salary << endl;
}

class dog : public Mammal
{
private:
    string type;
    int age;
public:
    void set_type(string l_type);
    void set_type(int l_age);
    void print_dog_properties(void);


    dog() :type("") , age(0)
    {

    }

};

void dog::set_type(string l_type)
{
    if ("" != l_type)
    {
        type = l_type;
    }
    else {/*nothing*/ }
}
void dog::set_type(int l_age)
{
    if (l_age < 0)
    {
        /*nothing*/
    }
    else
    {
        age = l_age;
    }
}
void dog::print_dog_properties(void)
{
    print_Mammal_properties();
    cout << "Dog Type: " << type << endl;
    cout << "Dog Age: " << age << endl;
}

int main()
{
    //Thing_Living plant;

    cout << endl << "************************** plant_1 ************************" << endl;

    plant plant_1;
    plant_1.set_transparency("No");
    plant_1.Set_Breathing("CO2");
    plant_1.set_electrial_conductivity(false);
    plant_1.set_Melting_point(200);
    plant_1.Set_Movement(false);
    plant_1.set_plant_Name("Apple");
    plant_1.set_plant_Season("Summer");
    plant_1.print_plant_properties();

    cout << endl << "************************* Repitile_1 *************************" << endl;

    Repetile Repitile_1;
    Repitile_1.Set_Breathing("O2");
    Repitile_1.set_breath_over_lung_only(true);
    Repitile_1.set_electrial_conductivity(false);
    Repitile_1.set_Melting_point(0);
    Repitile_1.Set_Movement(true);
    Repitile_1.Set_Repetile_legs_num(4);
    Repitile_1.Set_Repetile_name("snake");
    Repitile_1.set_warm_blood(true);
    Repitile_1.set_transparency("Null");
    Repitile_1.print_Repetile_properties();

    cout << endl << "************************* dog_1 *************************" << endl;

    dog dog_1;
    dog_1.Set_Breathing("O2");
    dog_1.set_breath_over_lung_only(true);
    dog_1.set_electrial_conductivity(false);
    dog_1.set_Mammal_tail(true);
    dog_1.set_Mammal_walks_on_four(true);
    dog_1.set_Melting_point(5000);
    dog_1.Set_Movement(true);
    dog_1.set_transparency("NULL");
    dog_1.set_type("German");
    dog_1.set_warm_blood(true);
    dog_1.print_dog_properties();

    cout << endl << "************************ person_1 **************************" << endl;

    Human_Being person_1;
    person_1.set_age(35);
    person_1.Set_Breathing("O2");
    person_1.set_breath_over_lung_only(true);
    person_1.set_electrial_conductivity(true);
    person_1.set_Mammal_tail(false);
    person_1.set_Mammal_walks_on_four(false);
    person_1.set_Melting_point(1000);
    person_1.Set_Movement(true);
    person_1.set_name("Ahmed_abdalla");
    person_1.set_transparency("NULL");
    person_1.set_warm_blood(true);
    person_1.print_Human_Being_properties();
    
    cout << endl << "*********************** artist_1 ***************************" << endl;

    artist artist_1;
    artist_1.set_age(35);
    artist_1.Set_Breathing("O2");
    artist_1.set_breath_over_lung_only(true);
    artist_1.set_electrial_conductivity(true);
    artist_1.set_Mammal_tail(false);
    artist_1.set_Mammal_walks_on_four(false);
    artist_1.set_Melting_point(1000);
    artist_1.Set_Movement(true);
    artist_1.set_name("Ahmed_abdalla");
    artist_1.set_transparency("NULL");
    artist_1.set_warm_blood(true);
    artist_1.set_salary(45000);
    artist_1.set_band_name("Awtar El-lyl");
    artist_1.print_artist_properties();
    
}


