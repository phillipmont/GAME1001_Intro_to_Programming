//Phillip Monteiro
//Week 3 lab assignment Part 2
//Feb 2, 2023

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "==========================\n"
		 << "Welcome to Tickets 'R' Us!\n"
		 << "==========================\n" << endl;
	
	cout << "Please follow the instructions below to calculate the final sale price." << endl << endl;

	double ticketPrice = 0.0;
	cout << "Enter your ticket price: ";
	cin >> ticketPrice; 
	cout << endl;
	
	int userAge = 0;
	cout << "Enter your age: ";
	cin >> userAge;

	double finalPrice = 0.0;
	
	if (userAge <= 12)
	{
		finalPrice = ticketPrice * 0.5;
	}
	else if (userAge >= 65)
	{
		finalPrice = ticketPrice * 0.75;
	}
	else finalPrice = ticketPrice;

	cout << endl << "Your final sale price is $" << finalPrice;

	return 0;
}