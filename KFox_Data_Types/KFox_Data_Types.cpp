#include <iostream>

using namespace std;

int main() 
{
	string name;
	char inital;
	short age;
	bool isAdult;
	unsigned int zipcode;
	float wage;
	short daysWorked;
	float hoursWorkedPerDay[7];
	const float TAX = 0.1;

	cout << "Enter First Name: ";
	cin >> name;

	cout << "Enter Inital of Last Name: ";
	cin >> inital;

	cout << "Enter Age: ";
	cin >> age;
	isAdult = (age >= 18);

	cout << "Enter Zipcode: ";
	cin >> zipcode;

	cout << "Enter Hourly Wage: ";
	cin >> wage;

	cout << "Enter Number Of Days Worked (Max 7): ";
	cin >> daysWorked;

	float totalHours = 0;

	for (int i = 0; i < daysWorked; i++) 
	{
		cout << "Enter Hours Worked Per Day " << (i + 1) << ": ";
		cin >> hoursWorkedPerDay[i];

		totalHours += hoursWorkedPerDay[i]; //Acumulate total hours
	}

	float grossIncome = totalHours * wage;
	float taxAmmount = grossIncome * TAX;
	float netIncome = grossIncome - taxAmmount;

	cout << "\nEmployee Payroll Summary\n";
	cout << "-------------------------\n";
	cout << "Name: " << name << " " << inital << ".\n";
	cout << "Age: " << age << " (Adult: " << (isAdult ? "Yes" : "No") << ")\n";
	cout << "ZipCode: " << zipcode << "\n";
	cout << "Hourly Wage: $" << wage << " per hour\n";
	cout << "Total Hours Worked: " << totalHours << " hours\n";
	cout << "Gross Income: $" << grossIncome << "\n";
	cout << "Tax Amount: $" << taxAmmount << "\n";
	cout << "Net Income: $" << netIncome << "\n";
}