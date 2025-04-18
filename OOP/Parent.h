
#pragma once
#include "Human.h"

using roomNumber = unsigned short;

class Parent : public Human {
public:
	Parent() {
		cout << "Professor Constructor\n";
	}

	Parent(std::string name, age_t age, roomNumber classroom, std::string classTopic) :
		Human{ name, age },
		classroom_m{ classroom },
		classTopic_m{ classTopic }
	{
		//
	}

	void setClassTopic(std::string classTopic) { classTopic_m = classTopic; }
	std::string getClassTopic() { return classTopic_m; }

	void SetClassroom(roomNumber classroom) {
		if (classroom > 300 || classroom < 400) {
			classroom_m = classroom;
		}
	}

	virtual void Read();

	virtual void Write();

	roomNumber GetClassroom() { return classroom_m; }

	Type getType() override { return Type::TEACHER; }

	void work() override { std::cout << "Professor Work\n"; }

private:
	roomNumber classroom_m;
	std::string classTopic_m;
};
