
#pragma once
#include "Human.h"
#include <vector>

class School {
public:
	~School();

	void add(Human::Type type);
	void displayAll();
	void displayByType(Human::Type type);
	void displayByName(std::string name);

private:
	std::vector<Human*> humans_m;

};
