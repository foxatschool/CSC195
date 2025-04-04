#pragma once
#include <string>

void f();

class Student
{
public: 
	Student() {}
	Student(std::string name) { this -> m_name = name; }
	void SetName(std::string name);

	void Write();

private:
	std::string m_name;
};
