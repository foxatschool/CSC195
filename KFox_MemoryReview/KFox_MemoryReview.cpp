#include <iostream>
using namespace std;
struct Person
{
	char name[32];
	int id;
};

void square(int& num)
{
	num = num * num;
}

void myDouble(int* num) 
{
	*num = *num * 2;
}

int main()
{
	// ** REFERENCE **
	//
	// declare an int variable and set the value to some number (less than 10)
	// declare a int reference and set it to the int variable above
	// output the int variable
	// set the int reference to some number
	// output the int variable
	// what happened to the int variable when the reference was changed? (insert

	int someNumber = 7;
	int& rOfSomeNumber = someNumber;
	cout << someNumber << endl;
	rOfSomeNumber = 3;
	cout << someNumber << endl;

	// output the address of the int variable
	// output the address of the int reference
	// are the addresses the same or different? (The same)
	// 
	cout << &someNumber << endl;
	cout << &rOfSomeNumber << endl;
	// 
	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int
		   //parameter
	// in the function, multiply the int parameter by itself and assign it back
		  //to the parameter(i = i * i)
	// call the Square function with the int variable created in the REFERENCE
		 //section
	square(someNumber);
		// output the int variable to the console
	cout << someNumber << endl;
	// !! notice how the variable has not changed, this is because we only passed
		 //the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we
		 //'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the
		 //parameter changes the calling variable ""
	// ** POINTER VARIABLE **
	//
	// declare an int pointer, set it to nullptr (it points to nothing)
	int* nPtr = nullptr;
	// set the int pointer to the address of the int variable created in the
		 //REFERENCE section
	nPtr = &someNumber;
	// output the value of the pointer
	cout << nPtr << endl;
	// what is this address that the pointer is pointing to? (Same as SomeNumber)
	// output the value of the object the pointer is pointing to (dereference the
		 //pointer)
	cout << *nPtr << endl;
	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer
		 //parameter
	// in the function, multiply the int pointer parameter by 2 and assign it
		 //back to the parameter(i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the
		 //address !!
	// call the Double function with the pointer created in the POINTER VARIABLE
		 //section
	myDouble(nPtr);
	// output the dereference pointer
	cout << *nPtr << endl;
	// output the int variable created in the REFERENCE section
	cout << someNumber << endl;
	// did the int variable's value change when using the pointer?
	//Yes
}
