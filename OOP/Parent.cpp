#include "Parent.h"

void Parent::Read()
{
	std::cout << "Professor\n";
	Human::Read();

	std::cout << "Classroom: ";
	std::cin >> classroom_m;
	std::cout << "Class Topic: ";
	std::cin >> classTopic_m;
}

void Parent::Write() {
	std::cout << "Professor\n";
	Human::Write();

	std::cout << "Classroom: " << classroom_m << endl;
	std::cout << "Class Topic: " << classTopic_m << endl;
}