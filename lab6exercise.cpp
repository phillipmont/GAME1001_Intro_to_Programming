/*
//Phillip Monteiro
//Lab exercise 6
//Feb 17, 2023

#include <iostream>

using namespace std;

double number1 = 0;
double number2 = 0;

double CompNumbers()
{
	if (number1 == number2)
		return 0;
	else if (number1 > number2)
		return 1;
	else if (number1 < number2)
		return -1;
}

int main()
{
	cout << "Enter the first number:\n";
	cin >> number1;
	cout << "Enter the second number:\n";
	cin >> number2;

	double answer = CompNumbers();

	if (answer == 0)
		cout << "The numbers are the same: " << number1;
	else if (answer == 1)
		cout << "The first number is larger: " << number1;
	else if (answer == -1)
		cout << "The second number is larger: " << number2;
	else cout << "Error";
	
	return 0;
}
//*/