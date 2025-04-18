#pragma once
#include "Human.h"
#include <iostream>

class Student : public Human {
public:
	Student() 
	{
		cout << "Student Constructor\n";
	}

	Student(std::string name, age_t age, float gpa) :
		Human{ name, age },
		gpa_m{ gpa }
	{
		cout << "Student Constructor\n";
	}

	virtual void Read();
	virtual void Write();

	void setGPA(float gpa) { gpa_m = gpa; }

	float getGPA() { return gpa_m; }

	Type getType() override { return Type::STUDENT; }

	void work() override { std::cout << "Student Work\n"; }

private:
	float gpa_m = 4.0f;
};