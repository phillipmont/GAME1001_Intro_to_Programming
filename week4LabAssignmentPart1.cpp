/*
//Phillip Monteiro
//Week 4 lab assignment Part 1
//Feb 2, 2023

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	const float OVERTIME_MULTIPLIER = 1.5f;
	
	cout << "Welcome! Please follow the instructions below to calculate your total weekly salary." << endl << endl;

	double hoursWorked = 0.0;
	cout << "Enter the number of hours worked: ";
	cin >> hoursWorked;
	cout << endl;

	double hourlyWage = 0.0;
	cout << "Enter hourly wage ($): ";
	cin >> hourlyWage;
	cout << endl;
	
	double totalSalary = 0.0;
	
	if (hoursWorked > 40)
	{
		totalSalary = 40 * hourlyWage + (hoursWorked - 40) * hourlyWage * OVERTIME_MULTIPLIER;
	}
	else totalSalary = hourlyWage * hoursWorked;

	cout << "Total weekly salary: $" << totalSalary;

	return 0;
}//*/