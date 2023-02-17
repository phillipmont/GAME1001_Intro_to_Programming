///*
//Phillip Monteiro
//Lab exercise 6
//Feb 17, 2023

//Write a function called “compNumbers” that takes 2 numbers (double values). If
//the two numbers are the same it returns 0. If the first parameter is larger than the
//second, it returns 1. If the second parameter is larger than the first it should
//return -1.
//Write a main program that asks the user to enter two numbers.
//The program should then use the function “compNumbers” to print the larger
//number or print if the numbers are the same.

#include <iostream>

using namespace std;

int number1 = 0;
int number2 = 0;
int answer = 0;

int CompNumbers()
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

	answer = CompNumbers();

	if (answer == 0)
		cout << "The numbers are the same: " << number1;
	else if (answer == 1)
		cout << "The first number is larger: " << number1;

	return 0;
}
//*/