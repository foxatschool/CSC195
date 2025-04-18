#pragma once
#include <iostream>

using age_t = unsigned short;

using namespace std;

class Human {
public:
    enum class Type {
        STUDENT,
        TEACHER
    };

public:
    Human() {
        cout << "Constructor\n";
        count_m++;
    }

    Human(string name, age_t age) :
        name_m{ name },
        age_m{ age }
    {
        cout << "Contstructor\n";
        count_m++;
    }

    ~Human() {
        cout << "Decontstructor\n";
        count_m--;
    }

    virtual void Read();
    virtual void Write();

    string getName() { return name_m; }

    age_t getAge() { return age_m; }

    void setAge(age_t age);

    static int getCount() { return count_m; }

    virtual Type getType() { return Type::STUDENT; };

    virtual void work() { std::cout << "Human Work\n"; }

protected:
    string name_m;
    age_t age_m = 0;
    static int count_m;
    static const float tax_m;
};

void func();