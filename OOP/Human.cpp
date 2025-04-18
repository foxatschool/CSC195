#include "Human.h"
#include "Console.h"

int Human::count_m = 0;
const float Human::tax_m = 0.0025f;

void func() {
    cout << "Funky!\n";
}

void Human::setAge(unsigned short age) {
    age_m = age;
}

void Human::Read()
{
    std::cout << "Human\n";

    std::cout << "\nEnter Name: ";
    //std::cin >> _name;
    name_m = getData<std::string>();
    std::cout << "Enter Age: ";
    age_m = getData<age_t>();

    //_age = getInt();
}

void Human::Write()
{
    std::cout << "Human\n";

    std::cout << "Name: " << name_m << endl;
    std::cout << "Age: " << age_m << endl;
}