#include <iostream>
#include <vector>
#include "Point.h"
#include <fstream>
#include <string>

#define NAME "Fox"
#define XBOX
#define PLAYSTATION
#define SWITCH
#define COMPUTER
//#define DEBUG

using names_t = std::vector<std::string>;

namespace math
{
	template <typename T1, typename T2>
	T1 max(T1 a, T2 b)
	{
		return (a > b) ? a : b;
	}
}

void print(const names_t& names)
{
	for (std::string name : names)
	{
		std::cout << name << std::endl;
	}
}

template<typename T>
void streamOut(std::ostream& ostream, const T& value)
{
	ostream << value << std::endl;
}

void streamIn(std::ifstream& ifstream, std::string& text)
{
	std::getline(ifstream, text);
}

int g = 5;

int main()
{
#ifdef _DEBUG
	std::cout << "Program Start" << std::endl;
#endif

#ifdef XBOX
	//Controller suport
#endif

	streamOut(std::cerr, NAME);

	std::ofstream fstream("text.txt");

	cordanateMath::ipoint_t p(4, 5);

	std::cin >> p;

	streamOut(fstream, "Hello!");
	streamOut(fstream, p);
	

	fstream.close();

	std::ifstream ifstream("text.txt");

	std::string text;

	if (ifstream.is_open())
	{
		while (std::getline(ifstream, text))
		{
			std::cout << text << std::endl;
		}
	}

	/*streamIn(std::cin, text);
	std::cout << text << std::endl;*/



	cordanateMath::ipoint_t p1(23, 34);
	cordanateMath::ipoint_t p2(12, 10);
	cordanateMath::ipoint_t p3;
	p3 = p1 - p2;

	/*std::cout << p3;

	std::cout << p3.getX() << " " << p3.getY() << std::endl;*/

	/*std::cout << std::max(5, 10) << std::endl;
	std::cout << math::max(6, 13.4f) << std::endl;

	names_t names{ "billy", "bob", "bo" };
	print(names);*/
}