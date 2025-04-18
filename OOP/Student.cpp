#include "Student.h"
#include <iostream>

void Student::Read() {
	std::cout << "Student\n";
	Human::Read();

	std::cout << "Enter GPA: ";
	std::cin >> gpa_m;
}

void Student::Write() {
	std::cout << "Student\n";
	Human::Write();

	std::cout << "GPA: " << gpa_m << endl;
}