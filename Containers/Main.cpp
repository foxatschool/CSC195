#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <stack>
#include <map>

using namespace std;


int main() 
{
	array<string, 7> a = {"Monday", "Teuseday", "Wednesday", "Thursdy", "Friday", "Saturday","Sunday"};

	cout << a.size() << endl;

	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << endl;
	}

	//vector
	vector<int> vec = { 1,2,3,4,5 };
	vec.push_back(7);
	vec.pop_back();

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}

	//list
	list<string> lst = { "Orange", "Pineapple", "Mango"};
	lst.insert(lst.begin(), "DragonFruit");
	lst.insert(lst.end(), "Pear");

	lst.remove("Orange");

	// Create an iterator pointing to the beginning of the list
	list<string>::iterator it = lst.begin();

	// Advance the iterator to the second element (0-based index)
	
	for (int i = 0; i < lst.size(); i++)
	{
		cout << *it << endl;

		advance(it, 1);
	}





	map<string, int>m;
	m["Bannana"] = 16;
	m["Apple"] = 130;
	m["Doughnut"] = 43;

	m["Apple"]= 125;

	for (const auto& pair : m) 
	{
		std::cout << pair.first << ": " << pair.second << std::endl;
	}


	return 0;
}
