#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>

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

	//Stack

	stack<int> s;
	s.push(1);
	s.push(2);
	s.pop();

	cout << s.top() << endl;

	for (auto iter = s.top(); iter != s.top(); iter++)
	{
		//cout << *iter << endl;
	}

	//list
	list<string> lst = { "Orange", "Pineapple", "Mango"};
	lst.insert(lst.begin(), "DragonFruit");
	lst.insert(lst.end(), "Pear");

	lst.remove("Orange");

	// Create an iterator pointing to the beginning of the list
	auto it = lst.begin();

	//lst<string>::iterator it = lst.begin();


	// Advance the iterator to the second element (0-based index)
	
	//for (int i = 0; i < lst.size(); i++)
	//{
	//	cout << *it << endl;

	//	//advance(it, 1);
	//	it++;
	//}

	for (auto it = lst.begin(); it != lst.end(); it++)
	{
		cout << *it << endl;
	}




	//map (ordered)
	map<string, int>m;
	m["Bannana"] = 16;
	m["Apple"] = 130;
	m["Doughnut"] = 43;

	m["Apple"]= 125;

	/*for (const auto& pair : m) 
	{
		std::cout << pair.first << ": " << pair.second << std::endl;
	}*/

	for (auto iter = m.begin(); iter != m.end(); iter++)
	{
		//cout << *iter << endl;
	}


	unordered_map<string, string> um;
	um["Riley"] = "allmendinger";
	um["Kaden"] = "Fox";

	cout << um["riley"] << endl;


	return 0;
}
