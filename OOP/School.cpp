#include "School.h"
#include "Student.h"
#include "Parent.h"

School::~School()
{
	for (Human* human : humans_m) {
		delete human;
	}
	humans_m.clear();
}

void School::add(Human::Type type)
{
	Human* human = nullptr;
	switch (type)
	{
	case Human::Type::STUDENT:
		human = new Student;
		break;

	case Human::Type::TEACHER:
		human = new Parent;
		break;

	default:
		break;
	}

	human->Read();
	humans_m.push_back(human);
}

void School::displayAll()
{
	for (Human* human : humans_m) {
		human->Write();
	}
}