///*
//Phillip Monteiro
//Week 5 lab assignment
//Feb 11, 2023

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double W = 0;
	cout << "What is the starting water level? (L)" << endl;
	cin >> W;

	double P = 0;
	cout << "What percentage of water is being taken? (%)" << endl;
	cin >> P;
	
	double take = 0;

	for (int day = 0; day <= 30; day++)
	{
		take = W * P * 0.01;
		W = W - take;
		cout << "Day " << day << ": " << take << " L of water removed from the well. " << W << " L remain." << endl;
		if (W < 100) break;
	}

	return 0;
}//*//